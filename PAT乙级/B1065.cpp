#include<stdio.h>
#include<algorithm>
using namespace std;
struct people{
	int issingle;//单身为1，否则为0
	int cp;//伴侣号
	int flag;//是否出席聚会 
};
int main(){
	people p[100000];
	for(int i=0;i<100000;i++){
		p[i].issingle=1;
		p[i].flag=0;
	}
	int k;scanf("%d",&k);
	int a,b;
	for(int i=0;i<k;i++){
		scanf("%d %d",&a,&b);
		p[a].issingle=0;
		p[b].issingle=0;
		p[a].cp=b;p[b].cp=a;
	}
	int n;scanf("%d",&n);
	int s;
	for(int i=0;i<n;i++){
		scanf("%d",&s);
		p[s].flag=1;
	}
	int num=0;
	for(int i=0;i<100000;i++){
		if(p[i].flag==1&&p[i].issingle==1) num++;
		else if(p[i].flag==1&&p[i].issingle==0&&p[p[i].cp].flag==0) num++;
	}
	if(num==0){
		printf("0\n");
	}
	else{
		printf("%d\n",num);
		int q;
		for(int i=0;i<100000;i++){
			if(p[i].flag==1&&(p[i].issingle==1||(p[i].issingle==0&&p[p[i].cp].flag==0)))
			{
				q=i;
				printf("%05d",q);
				break;				
			}
		}
		for(int i=q+1;i<100000;i++){
			if(p[i].flag==1&&(p[i].issingle==1||(p[i].issingle==0&&p[p[i].cp].flag==0)))
				printf(" %05d",i);				
		}	
	}
	return 0;
}
