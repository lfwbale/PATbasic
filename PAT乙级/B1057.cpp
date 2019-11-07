#include<stdio.h>
#include<string.h>
void change(int n){
	int num0,num1;
		num0=0;num1=0;
	while(n!=0){
		if(n%2==0) num0++;
		else if(n%2==1) num1++;
		n=n/2;		
	}
	printf("%d %d",num0,num1);
}
int main(){
	char a[100010];
	gets(a);
	int len=strlen(a);
	int sum=0;
	for(int i=0;i<len;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			sum=sum+a[i]-'A'+1;
		}
	 if(a[i]>='a'&&a[i]<='z'){
			sum=sum+a[i]-'a'+1;
		}
	} 
	change(sum);
	return 0;
} 
