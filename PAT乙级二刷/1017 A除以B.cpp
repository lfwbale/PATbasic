#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[1010];int b;
	scanf("%s %d",a,&b);
	int p[1010],r;
	p[0]=(a[0]-'0')/b;r=(a[0]-'0')%b;
	if(p[0]!=0||strlen(a)==1) printf("%d",p[0]);
	for(int i=1;i<strlen(a);i++){
		p[i]=(r*10+(a[i]-'0'))/b;
		printf("%d",p[i]);
		r=(r*10+(a[i]-'0'))%b;
	}
	printf(" %d",r);
	system("pause");
	return 0;
	
}
