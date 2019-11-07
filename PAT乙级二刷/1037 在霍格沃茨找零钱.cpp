#include<stdio.h>
int main(){
	int g,s,k;
	int shouldpay,repay;
	scanf("%d.%d.%d",&g,&s,&k);
	shouldpay=g*17*29+s*29+k;
	getchar();
	scanf("%d.%d.%d",&g,&s,&k);
	repay=g*17*29+s*29+k;
	int ans=shouldpay-repay;
	if(ans>0){
		printf("-");
	}
	else ans=-ans;
	g=ans/(17*29);
	ans=ans%(17*29);
	s=ans/29;
	k=ans%29;
	printf("%d.%d.%d",g,s,k);
	return 0;
} 
