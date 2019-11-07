#include<stdio.h>
int main(){
	int n,d;
	scanf("%d %d",&n,&d);
	d=d%n;
	if(d==0) d=n;
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",a[n-d]);
	for(int i=n-d+1;i<n;i++){
		printf(" %d",a[i]);
	}
	for(int i=0;i<n-d;i++){
		printf(" %d",a[i]);
	}
	return 0;
	
}
