#include<stdio.h>
#include<string.h>
int issu(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	} 
	return 1;
}
int main(){
	int l,k;
	int sum,temp;
	scanf("%d %d",&l,&k);
	char a[1010];
	scanf("%s",a);
	int flag=0;
	for(int i=0;i+k<=l;i++){
		sum=0;temp=1;
		for(int j=0;j<k;j++){
			sum=sum+(a[i+k-1-j]-'0')*temp;
			temp=temp*10;
		}
		if(issu(sum)==1){
			flag=1;
			break;
		}
	}
	if(flag==0) printf("404");
	else if(flag==1){
		int len=0;
		int sum1=sum;
		while(sum!=0){
			sum=sum/10;
			len++;
		}
		if(len<k){
			for(int i=0;i<k-len;i++){
				printf("0");
			}
		}
		printf("%d",sum1);
	} 
	return 0;
}
