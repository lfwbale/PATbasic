#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j) sum+=a[i]*10+a[j];
		}
	}
	printf("%d",sum);
	return 0;
} 
