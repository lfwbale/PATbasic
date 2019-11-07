#include<stdio.h>
#include<string.h>
const int maxn=100;
struct key{
	char val;//a-z;A-Z;0-9 -
	bool flag;//ÊÇ·ñ³öÏÖ
	int count; 
};
int main(){
	key a[63];
	for(int i=0;i<63;i++){
		a[i].flag=false;
		a[i].count=0;
	}
	for(int i=0;i<26;i++){
		a[i].val='a'+i;
	}
	for(int i=26;i<52;i++){
		a[i].val='A'+i-26;
	}
	for(int i=52;i<62;i++){
		a[i].val='0'+i-52;
	}
	a[62].val='_';
	char str[maxn],substr[maxn];
	scanf("%s %s",str,substr);
	int lena=strlen(str);	 
	int lenb=strlen(substr);
	for(int i=0;i<lenb;i++){
		for(int j=0;j<63;j++){
			if(substr[i]==a[j].val){
				a[j].flag=true;
				break;
			}
		}
	}
	for(int i=0;i<lena;i++){
		for(int j=0;j<63;j++){
			if(str[i]==a[j].val&&a[j].flag==false&&a[j].count==0){
				
				if(j<26){
				printf("%c",a[j+26].val);
				a[j+26].count=1;
				a[j].count=1;
			}
			else{
				printf("%c",a[j].val);
				if(j>=26&&j<52){
					a[j-26].count=1;
					a[j].count=1;
				}
				else{
					a[j].count=1;
				}
				
			}
		}
	}
	 
}
return 0;

}
