#include<stdio.h>
#include<string.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n+1];
	memset(a,0,sizeof(a));
	int temp;
	for(int i=0;i<m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&temp);
			a[j]=a[j]+temp;
		}
	}
	int max=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=max){
			max=a[i];
		}
	}
	printf("%d\n",max);
	int num=0;
	for(int i=1;i<=n;i++){
		if(a[i]==max){
			num++;
			if(num==1) printf("%d",i);
			else printf(" %d",i);
		}
	}
	return 0;
}
