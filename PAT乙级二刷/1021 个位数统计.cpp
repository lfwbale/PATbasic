#include<stdio.h>
#include<string.h>
int main(){
	char a[1010];
	scanf("%s",a);
	int hashtable[10]={0};
	for(int i=0;i<strlen(a);i++){
		hashtable[a[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(hashtable[i]!=0) printf("%d:%d\n",i,hashtable[i]);
	}
	return 0;
}
