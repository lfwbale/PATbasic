#include<stdio.h>
#include<string.h>
int main(){
	char sub[1010];
	gets(sub);
	int len = strlen(sub);
	int a[130];
	memset(a,0,sizeof(a));
	for(int i=0;i<len;i++){
		if(sub[i]>='A'&&sub[i]<='Z') sub[i]=sub[i]-'A'+'a'; 
		a[sub[i]]++;
	}
	int max=0;
	char ans;
	for(int i=0;i<130;i++){
		if(a[i]>max&&i>='a'&&i<='z') 
		{
			max=a[i];
			ans=i;
		}
	}
	printf("%c %d",ans,max);
	return 0;
}
