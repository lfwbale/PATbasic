#include<stdio.h>
#include<string.h>
int main(){
	char c;
	int hashtable[130]={0};
	while(scanf("%c",&c)!=EOF){
		if(c=='\n') continue;
		if(hashtable[c]==0){
			putchar(c);
			hashtable[c]=1;
		}
	}
	return 0;

}
