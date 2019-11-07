#include<stdio.h>
#include<string.h>
int main(){
	char a[100100];
	gets(a);
	int sum=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a'&&a[i]<='z') sum=sum+a[i]-'a'+1;
		else if(a[i]>='A'&&a[i]<='Z') sum=sum+a[i]-'A'+1;
	}
		int num0=0,num1=0;
		while(sum>0){
			if(sum%2==0) num0++;
			else num1++;
			sum=sum/2;
		}
		printf("%d %d",num0,num1);
		printf("\n");
	return 0;
} 
