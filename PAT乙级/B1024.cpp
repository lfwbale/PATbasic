#include<stdio.h>
#include<string.h>
const int maxn=1100;
int main(){
	char a[maxn];
	scanf("%s",a);
	if(a[0]=='-'){
		printf("-");
	}
	int len=strlen(a);
	int k;//指数的位置 
	for(int i=1;i<len;i++){
		if(a[i]=='E'){
			k=i+2;
			break;
		}
	}
	int sum=0,temp=1;
	for(int i=len-1;i>=k;i--){
		sum=sum+(a[i]-'0')*temp;
		temp=10*temp;
	}
	if(sum==0){
	for(int i=1;i<k-2;i++){
	printf("%c",a[i]);	
	}
	}
	else{
	if(a[k-1]=='-'){//.要左移 
	printf("0.");
	for(int i=0;i<sum-1;i++){
		printf("0");
	}
	printf("%c",a[1]);
	for(int i=3;i<k-2;i++){
		printf("%c",a[i]);
	}	
	}
	else{//.要右移动 
		int temp;
		for(int i=3;i<k-2;i++){
			temp++;
		}
		if(sum==temp){
			printf("%c",a[1]);
			for(int i=3;i<k-2;i++){
				printf("%c",a[i]);
			}
		}
		else if(sum<temp){
			printf("%c",a[1]);
			for(int i=0;i<sum;i++){
				printf("%c",a[i+3]);
			}
			printf(".");
			for(int i=sum+3;i<k-2;i++){
				printf("%c",a[i]);
			}
		}
		else if(sum>temp){
			printf("%c",a[1]);
			for(int i=3;i<k-2;i++){
				printf("%c",a[i]);
			}
			for(int i=0;i<sum-temp;i++){
				printf("0");
			} 
		}
	}
}
return 0;
} 
