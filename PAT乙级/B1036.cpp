#include<stdio.h>
int main(){
	int n,row;
	char c;
	scanf("%d %c",&n,&c);
	if(n%2==0) row=n/2;
	else row=n/2+1;
	for(int i=0;i<n;i++){
		printf("%c",c);
	}
	printf("\n");//��һ��
	for(int i=0;i<row-2;i++){ //�м�
	printf("%c",c);
	for(int j=0;j<n-2;j++){
		printf(" ");
	}
	printf("%c",c);
	printf("\n");
 }
 	for(int i=0;i<n;i++){
		printf("%c",c);
	}
	return 0;
}
