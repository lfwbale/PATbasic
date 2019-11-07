#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct ti{
	int tihao;
	double fen;
	int choice;
	int tch;
	bool zhengque[130]={0};
	int cuo[130]={0};
}data[101];
int main(){
	int hashtable[130]={0};
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%lf %d %d",&data[i].fen,&data[i].choice,&data[i].tch);
		for(int j=0;j<data[i].tch;j++){
			char c;
			scanf(" %c",&c);
			data[i].zhengque[c]=true;
		}
		data[i].tihao=i+1;
	}
	for(int i=0;i<n;i++){
		double fenshu=0;
		for(int j=0;j<m;j++){
			int k,duishang=0;
			bool flag=true;
			scanf(" (%d",&k);
			memset(hashtable,0,sizeof(hashtable));
			for(int p=0;p<k;p++){
				char c;
				scanf(" %c",&c);
				hashtable[c]=1;
				if(data[j].zhengque[c]==true){
					duishang++;
				}
				else {
					flag=false;
					data[j].cuo[c]++;
				}
			}
			getchar();
			if(flag==true&&duishang==data[j].tch) fenshu=fenshu+data[j].fen;
			else if(flag==true&&duishang!=data[j].tch) {
			fenshu=fenshu+data[j].fen*1.0/2;
			for(int q='a';q<='e';q++){
				if(data[j].zhengque[q]==true&&hashtable[q]==0)
				data[j].cuo[q]++;
			}
			}
		}
		printf("%.1f\n",fenshu);
	}
	int max=0;
	for(int i=0;i<m;i++){
		for(int j='a';j<='e';j++){
			if(data[i].cuo[j]>max){
				max=data[i].cuo[j];
			}
		}
	}
	if(max==0) printf("Too simple");
	else{
		for(int i=0;i<m;i++){
			for(int j='a';j<='e';j++){
				if(data[i].cuo[j]==max){
					printf("%d %d-%c\n",max,data[i].tihao,j);
				}
			}
		}
	}
	return 0;
}
