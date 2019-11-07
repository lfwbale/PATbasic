#include<stdio.h>
#include<string.h>
int main(){
	char password[25];
	int n;
	scanf("%s",password);
	scanf("%d",&n);
	getchar();
	int num=0;
	char a[100][100];
	while(gets(a[num])!=NULL){
		num++;
	}
	int flag=0;
	int t;
	for(int i=0;i<n&&i<num-1;i++){
		t=i;
		if(strcmp(a[i],password)==0){
			printf("Welcome in");
			flag=1;
			break;
		}
		else {
			printf("Wrong password: %s\n",a[i]);
		}
	}
	if(flag==0&&t==n-1) printf("Account locked");
	return 0;
} 
