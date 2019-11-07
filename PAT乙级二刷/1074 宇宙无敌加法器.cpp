#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char digit[20];char a[20];char b[20];
	int c[21];
	scanf("%s",digit);scanf("%s",a);scanf("%s",b);
	reverse(digit,digit+strlen(digit));
	reverse(a,a+strlen(a));
	reverse(b,b+strlen(b));
	for(int i=strlen(a);i<strlen(digit);i++) a[i]='0';
	for(int i=strlen(b);i<strlen(digit);i++) b[i]='0';
	for(int i=0;i<strlen(digit);i++){
		if(digit[i]=='0') digit[i]='0'+10;
	}
	int flag=0;//表示进位
	for(int i=0;i<strlen(digit);i++){
		c[i]=(a[i]-'0'+b[i]-'0'+flag)%(digit[i]-'0');
		flag=(a[i]-'0'+b[i]-'0'+flag)/(digit[i]-'0');
	}
	if(flag!=0) printf("%d",flag); 
	reverse(c,c+strlen(digit));
	int p;
	for(int i=0;i<strlen(digit);i++){
		if(c[i]!=0){
			p=i;
			break;
		}
	}
	if(p==strlen(digit)&&flag==0) {
		printf("0");
		return 0;
	}
	if(flag!=0) p=0;
	for(int i=p;i<strlen(digit);i++) printf("%d",c[i]);
	
	return 0;
}
