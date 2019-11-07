#include<stdio.h>
#include<string.h>
int main(){
	char z;
	char a[1010];
	scanf("%c",&z);
	getchar();
	gets(a);
	if(z=='C'){
		char temp=a[0];int num=1;
		for(int i=1;i<strlen(a);i++){
			if(i!=strlen(a)-1){
			if(a[i]==a[i-1]){
				num=num+1;
			}
			else{
				if(num==1) {
				printf("%c",a[i-1]);
				temp=a[i];
			}
				else{
					printf("%d%c",num,a[i-1]);
					temp=a[i];
				}
				num=1;
			}
		}
		else{
			if(a[i]==a[i-1]){
				printf("%d%c",num+1,a[i-1]);
			}
			else{
				if(num!=1) printf("%d%c%c",num,a[i-1],a[i]);
				else if(num==1) printf("%c%c",a[i-1],a[i]);
			} 
		}
		} 
	}
	else if(z=='D'){
		int sum,temp;
		for(int i=0;i<strlen(a);i++){
			if(i==0&&(a[i]>'9'||a[i]<'0')) printf("%c",a[i]);
			else if(i!=0&&(a[i]>'9'||a[i]<'0')&&(a[i-1]>'9'||a[i-1]<'0')) printf("%c",a[i]);
			else if(i!=0&&(a[i]>'9'||a[i]<'0')&&(a[i-1]<='9'&&a[i-1]>='0')){
				sum=0;temp=1;
				for(int j=i-1;a[j]>='0'&&a[j]<='9'&&j>=0;j--){
					sum=sum+(a[j]-'0')*temp;
					temp=temp*10;
				}
				for(int j=0;j<sum;j++){
					printf("%c",a[i]);
				}
			} 
		}
	}
	return 0;
} 
