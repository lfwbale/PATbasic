#include<stdio.h>
#include<string.h>
int main(){
	int hashtable[300]={0};
	char a[101000];
	gets(a);
	int big=0;
	for(int i=0;i<strlen(a);i++){
		hashtable[a[i]]=1;
		if(a[i]=='+') big=1;
	}
	for(int i='A';i<='Z';i++){
		if(hashtable[i]==1){
			hashtable[i-'A'+'a']=1;
		}
	}
	if(big==1){
		for(int i='A';i<='Z';i++){
			hashtable[i]=1;
		}
	}
	int flag=0;
	char c;
    while(scanf("%c",&c)!=EOF){
    	if(hashtable[c]!=1) printf("%c",c);
    }
	return 0;
}
