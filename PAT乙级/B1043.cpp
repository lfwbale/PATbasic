#include<stdio.h>
#include<string.h>
int main(){
	char a[10010];
	scanf("%s",a);
	int len=strlen(a);
	int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,sum=0;
	for(int i=0;i<len;i++){
		if(a[i]=='P') {
		num1++;
		sum++;
		}
		else if(a[i]=='A') {
		num2++;
		sum++;
		}
		else if(a[i]=='T') {
		num3++;
		sum++;
		}
		else if(a[i]=='e') {
		num4++;
		sum++;
		}
		else if(a[i]=='s') {
		num5++;
		sum++;
		}
		else if(a[i]=='t') {
		num6++;
		sum++;
		}
	}
	
	while(sum>0){
		if(num1>0){
			printf("P");
			num1--;
			sum--;
		}
	    if(num2>0){
			printf("A");
			num2--;
			sum--;
		}
		if(num3>0){
			printf("T");
			num3--;
			sum--;
		}
		if(num4>0){
			printf("e");
			num4--;
			sum--;
		}
		if(num5>0){
			printf("s");
			num5--;
			sum--;
		}
		if(num6>0){
			printf("t");
			num6--;
			sum--;
		}
	}
	return 0;
}
