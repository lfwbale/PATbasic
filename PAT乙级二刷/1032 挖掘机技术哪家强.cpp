#include<stdio.h>
#include<string.h>
int main(){
	int n;scanf("%d",&n);
	int a[n+1];int schoolnum,score;
	int p=0;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		scanf("%d %d",&schoolnum,&score);
		if(schoolnum>p) p=schoolnum;
		a[schoolnum]=a[schoolnum]+score;
	}
	int max=-1,ans=0;
	for(int i=1;i<=p;i++){
		if(a[i]>max){
			max=a[i];
			ans=i;
		}
	}
	printf("%d %d",ans,max);
	return 0;
}
