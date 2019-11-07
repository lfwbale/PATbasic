#include<stdio.h>
int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	for(int i=0;i<n;i++) printf("%c",c);
	printf("\n");
	int h;
	if(n%2==0) h=n/2-2;
	else h=n/2-1;
	for(int i=0;i<h;i++){
		printf("%c",c);
		for(int i=0;i<n-2;i++) printf(" ");
		printf("%c\n",c);
	}
	for(int i=0;i<n;i++) printf("%c",c);
	return 0;
}
