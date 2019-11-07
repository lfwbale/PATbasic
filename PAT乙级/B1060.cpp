#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];int ans=0,num;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=0,min=1000000;
	for(int i=0;i<n;i++){
		if(a[i]>=max){
			max=a[i];
		}
		if(a[i]<=min){
			min=a[i];
		}
	}
	if(min>n) ans=n;
	else if(n>max) ans=max-1;
	else {
		for(int i=0;i<=n;i++){
			num=0;
			for(int j=0;j<n;j++){
				if(a[j]>i) num++;
				if(num==i){
					ans=i;
					break;
				}
			}
		}
	}
	printf("%d",ans);
	return 0;
	
}
