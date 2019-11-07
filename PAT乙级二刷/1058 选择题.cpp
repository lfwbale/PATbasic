#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct ti{
	int tihao;
	int fen;
	int choice;
	int tch;
	bool zhengque[130]={0};
	int cuo=0;
}data[101];
bool cmp(ti a,ti b){
	if(a.cuo!=b.cuo) return a.cuo>b.cuo;
	else return a.tihao<b.tihao; 
}
int main(){
	int m;
	int n;
	scanf("%d %d",&n,&m);
	int fenshu[n];
	memset(fenshu,0,sizeof(fenshu));
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&data[i].fen,&data[i].choice,&data[i].tch);
		char c;
		for(int j=0;j<data[i].tch;j++){
			scanf(" %c",&c);
			data[i].zhengque[c]=true;
		}
		data[i].tihao=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int k;
			int flag=1,duishang=0;
			scanf(" (%d",&k);
			for(int p=0;p<k;p++){
				char c;
				scanf(" %c",&c);
				if(data[j].zhengque[c]==true) duishang++;
				else flag=0; 
			}
			getchar();
			if(flag==1&&duishang==data[j].tch) fenshu[i]+=data[j].fen;
			else data[j].cuo++;
		}
		printf("%d\n",fenshu[i]);
	}
	sort(data,data+m,cmp);
	printf("%d",data[0].cuo);
	for(int i=0;i<m;i++){
		if(data[i].cuo==data[0].cuo){
			printf(" %d",data[i].tihao);
		}
		else break;
	}
	system("pause");
	return 0;
}
