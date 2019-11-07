#include<stdio.h>
#include<string.h>
int main(){	
	char num[4];
	scanf("%s",num); 
	int len=strlen(num);
	if(len==1){
		for(int i=1;i<=num[0]-'0';i++){
			printf("%d",i);
		}
	}
	else if(len==2){
		for(int i=0;i<num[0]-'0';i++){
			printf("S");
		}
		for(int i=1;i<=num[1]-'0';i++){
			printf("%d",i);
		}		
	}
	else if(len==3){
		for(int i=0;i<num[0]-'0';i++){
			printf("B");
		}
		for(int i=0;i<num[1]-'0';i++){
			printf("S");
		}
		for(int i=1;i<=num[2]-'0';i++){
			printf("%d",i);
		}
	}
	return 0;
}
