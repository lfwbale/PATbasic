#include<stdio.h>
int main(){
	int num=0;
	char a[80][90];
	while(scanf("%s",a[num])!=EOF){
		num++;
	}
	printf("%s",a[num-1]);
	for(int i=num-2;i>=0;i--){
		printf(" %s",a[i]);
	}
	return 0;
}
