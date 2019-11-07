#include<stdio.h>
#include<string.h>
int main(){
	char a[1010];
	char b[1010];
	scanf("%s",a);
	scanf("%s",b);
	int hash1[150]={0};
	int hash2[150]={0};
	for(int i=0;i<strlen(a);i++){
		hash1[a[i]]++;
	}
	for(int i=0;i<strlen(b);i++){
		hash2[b[i]]++;
	}
	int flag=1;
	int num1=0,num2=0;
	for(int i=0;i<150;i++){
		if(hash1[i]<hash2[i]){
			flag=0;
			num2=num2+(hash2[i]-hash1[i]);
		}
		else if(hash1[i]>hash2[i]){
			num1=num1+(hash1[i]-hash2[i]);
		}
	}
	if(flag==1) printf("Yes %d",num1);
	else printf("No %d",num2);
	return 0;
}
