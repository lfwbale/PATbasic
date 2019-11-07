#include<stdio.h>
#include<string.h>
int main(){
	char a[12];
	char b[12];
	char c1,c2;
	scanf("%s %c %s %c",a,&c1,b,&c2);
	int sum1=0,sum2=0,s1,s2;
	s1=c1-'0';s2=c2-'0';
	for(int i=0;i<strlen(a);i++){
		if(a[i]==c1){
			sum1=sum1*10+s1;
		}
	}
	for(int i=0;i<strlen(b);i++){
		if(b[i]==c2){
			sum2=sum2*10+s2;
		}
	}
	int sum=sum1+sum2;
	printf("%d",sum);
	return 0;
}
