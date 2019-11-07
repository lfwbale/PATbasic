#include<stdio.h>
#include<string.h>
int main(){
	char a[101000];
	scanf("%s",a);
	long long sum=0;
	long long nump=0,numt=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='T') numt++;
	}
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='P') nump++;
		else if(a[i]=='T') numt--;
		else if(a[i]=='A') sum=(sum+nump*numt)%1000000007;
	}
	printf("%lld",sum);
	return 0;
}
