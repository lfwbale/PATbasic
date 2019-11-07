#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	double a[n];
	for(int i=0;i<n;i++) scanf("%lf",&a[i]);
	double sum=0;
	int left,right;
	for(int i=0;i<n;i++){
		//sum=sum+(n-i)*(i+1)*a[i];
		  sum=sum+a[i]*(i+1)*(n-i);
	}
	printf("%.2f",sum);
	return 0;
}
