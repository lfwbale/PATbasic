#include<stdio.h>
#include<string.h>
int main(){
	char a[101000];
	scanf("%s",a);
	int len=strlen(a);
	long long nump=0,numt=0,sum=0;
	for(int i=0;i<len;i++){
		if(a[i]=='T') numt++;
	}
	for(int i=0;i<len;i++){
		if(a[i]=='P') nump++;
		if(a[i]=='T') numt--;
		if(a[i]=='A'){
			sum=sum+nump*numt;
			if(sum>=1000000007) sum=sum%1000000007;
		}
	}
	printf("%lld",sum);
	return 0;
}
