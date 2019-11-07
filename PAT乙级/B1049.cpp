#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	double a[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);//ÓÖÍü 
	}
	double sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i]*(i+1)*(n-i);
	} 
	printf("%.2f",sum);
	return 0;
}
