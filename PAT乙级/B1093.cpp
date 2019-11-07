#include<stdio.h>
#include<string.h>
const int maxn=1000000;
int main(){
	char a[maxn];
	char b[maxn];
	int hashtable[127]={0};
	gets(a);gets(b);
    for(int i=0;i<strlen(a);i++){
    	if(hashtable[a[i]]==0){
    		printf("%c",a[i]);
    		hashtable[a[i]]=1;
    	}
    }
    for(int i=0;i<strlen(b);i++){
    	if(hashtable[b[i]]==0){
    		printf("%c",b[i]);
    		hashtable[b[i]]=1;
    	}
    }
	return 0;
}
