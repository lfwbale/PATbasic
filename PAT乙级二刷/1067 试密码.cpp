#include<stdio.h>
#include<string.h>
int main(){
	char password[25];
	int n;
	scanf("%s %d",password,&n);
	getchar();
	char a[500][500];
	int count=0;
	while(gets(a[count])!=NULL){
		count++;
	}
	for(int i=0;i<n&&i<count-1;i++){
		if(strcmp(password,a[i])!=0&&i!=n-1){
			printf("Wrong password: %s\n",a[i]);
			continue;
		}
		if(strcmp(password,a[i])==0){
			printf("Welcome in\n");
			break;
		}
		if(strcmp(password,a[i])!=0&&i==n-1){
			printf("Wrong password: %s\n",a[i]);
			printf("Account locked");
		}
	}
	return 0;
}
