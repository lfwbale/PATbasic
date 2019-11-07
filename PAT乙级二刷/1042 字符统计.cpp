#include<stdio.h>
#include<string.h>
int main(){
	char a[1010];
	gets(a);
	int hashtable[200]={0};
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			if(a[i]>='A'&&a[i]<='Z') a[i]=a[i]-'A'+'a';
			hashtable[a[i]]++;
		}
	}
	int max=0;
	char c;
	for(int i='a';i<='z';i++){
		if(hashtable[i]>max){
			max=hashtable[i];
			c=i;
		}
	}
	printf("%c %d",c,max);
	return 0;
}
