#include<stdio.h>
#include<string.h>
int main(){
	int hashtable[100]={0};
	int flag[100]={0};
	char a[100];char b[100];
	scanf("%s",a);scanf("%s",b);
	for(int i=0;i<strlen(a);i++){
		hashtable[a[i]]=1;
	}
	for(int i=0;i<strlen(b);i++){
		hashtable[b[i]]=0;
	}
	for(int i=0;i<strlen(a);i++){
		if(hashtable[a[i]]==1){
			if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-'a'+'A';
			if(flag[a[i]]==0){
				printf("%c",a[i]);
				flag[a[i]]=1;
			}
			}
	}
	return 0;
}
