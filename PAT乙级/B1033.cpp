#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct key{
	char val;
	bool flag;
};
const int maxn=100010;
int main(){
	key a[67];
		for(int i=0;i<67;i++){
		a[i].flag=false;
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
	a[63].val=',';
	a[64].val='.';
	a[65].val='-';
	a[66].val='+';
	char str[maxn],substr[maxn];
	fgets(str,100,stdin);
	fgets(substr,100010,stdin);
	int lena=strlen(str);	 
	int lenb=strlen(substr);
	if(lena==0){
		printf("%s",substr);
	}
	else{
	for(int i=0;i<lena;i++){
		for(int j=26;j<67;j++){
			if(str[i]==a[j].val){
				if(j==66){
					for(int k=26;k<52;k++){
						a[k].flag=true;
					}
				}
				else if(j<=51){
					a[j].flag=true;
					a[j-26].flag=true;
				}
				else{
					a[j].flag=true;
				}
				break;
			}
		}
	}
	for(int i=0;i<lenb;i++){
		for(int j=0;j<67;j++){
		if(substr[i]==a[j].val){
			if(a[j].flag==false){
				printf("%c",a[j].val);
			}
			else{
				break;
			}
		} 
	}
}
}
return 0;
}
