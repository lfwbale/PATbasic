#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int group[1001][11]={0};
	int n;
	scanf("%d",&n);
	int p,q,r;
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&p,&q,&r);
		group[p][q]=r;
	}
	int max=0,sum,count;
	for(int i=0;i<1001;i++){
		sum=0;
		for(int j=0;j<11;j++){
			sum+=group[i][j];
		}
		if(sum>=max){
			max=sum;
			count=i;
		}
	}
	printf("%d %d",count,max);
	return 0;
	
	
}
