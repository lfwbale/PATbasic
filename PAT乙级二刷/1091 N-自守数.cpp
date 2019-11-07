#include<stdio.h>
#include<math.h>
int digit(int n){
	int num=0;
	while(n>0){
		n=n/10;
		num++;
	}
	return pow(10,num);
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=1;j<10;j++){
			int d=digit(a[i]);
			if(a[i]==(a[i]*a[i]*j)%d){
				flag=1;
				printf("%d %d\n",j,a[i]*a[i]*j);
				break;
			}
		}
		if(flag==0) printf("No\n");
	}
	return 0;
}
