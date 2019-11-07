#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char a[1010];scanf("%s",a);
	int flag=1;int len=strlen(a);
	for(int i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i]){
			flag=0;
			break;
		}
	}
	if(flag==1) printf("%s is a palindromic number.",a);
	else{
		int b[1010];
		int tag;//标记是否有进位 
		int count=0;
		int digit=strlen(a);
		while(count<10){
			flag=1;
			tag=0;
			for(int i=0;i<digit;i++) printf("%c",a[i]);
			printf(" + ");
			for(int i=digit-1;i>=0;i--) printf("%c",a[i]);
			printf(" = ");
			for(int i=0;i<digit;i++){
				b[i]=(a[i]+a[digit-1-i]-'0'-'0'+tag)%10;
				tag=(a[i]+a[digit-1-i]-'0'-'0'+tag)/10;
			}
			
			//printf("**tag=%d**",tag);
			
			if(tag!=0){
				b[digit]=tag;
				digit++;
			}
			for(int i=digit-1;i>=0;i--){
				printf("%d",b[i]);
				a[digit-1-i]=b[i]+'0';
			}
			printf("\n");
			for(int i=0;i<digit/2;i++){
				if(a[i]!=a[digit-1-i]){
					flag=0;
					break;
				}
			}
			if(flag==1){
				for(int i=0;i<digit;i++) printf("%c",a[i]);
				printf(" is a palindromic number.");
				break;	
			}
			else{
				count++;
			}
		}
		if(flag==0){
			printf("Not found in 10 iterations.");
		}
	}
	return 0;
}
