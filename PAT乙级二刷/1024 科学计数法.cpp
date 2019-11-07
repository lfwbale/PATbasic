#include<stdio.h>
#include<string.h>
int main(){
	char a[500000];scanf("%s",a);
	if(a[0]=='-') printf("-");
	int epos;
	for(int i=1;i<strlen(a);i++){
		if(a[i]=='E'){
			epos=i;
			break;
		}
	}
	int fealong=epos-3;
	int sum=0;;
	for(int i=epos+2;i<strlen(a);i++){
		sum=sum*10+(a[i]-'0');
	}
	if(a[epos+1]=='+'){
		if(fealong<=sum){
			printf("%c",a[1]);
			for(int i=3;i<epos;i++){
				printf("%c",a[i]);
			}
			for(int i=0;i<sum-fealong;i++){
				printf("0");
			}
		}
		if(fealong>sum){
			printf("%c",a[1]);
			if(sum==0) printf(".");
			for(int i=1;i<=fealong;i++){
				printf("%c",a[i+2]);
				if(i==sum) printf(".");
			}
		}
	}
	else{
		if(sum==0){
			for(int i=1;i<epos;i++){
				printf("%c",a[i]);
			}
		}
		else{
			printf("0.");
			for(int i=0;i<sum-1;i++){
				printf("0");
			}
			for(int i=1;i<epos;i++){
				if(a[i]!='.') printf("%c",a[i]);
			}
		}
	}
	return 0;
} 
