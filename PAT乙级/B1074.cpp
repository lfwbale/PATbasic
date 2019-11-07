#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char table[21];
	scanf("%s",table);
	int n=strlen(table);
	reverse(table,table+n);
	for(int i=0;i<n;i++){
		if(table[i]=='0') table[i]='0'+10;
	} 
    char a[21];char b[21];
    scanf("%s",a); scanf("%s",b);
    int lena=strlen(a); int lenb=strlen(b);
    reverse(a,a+lena); reverse(b,b+lenb);
    int len;
    if(lena>lenb){
    	len=lena;
    	for(int i=lenb;i<lena;i++){
    		b[i]='0';
    	}
    }
    if(lena<lenb){
    	len=lenb;
    	for(int i=lena;i<lenb;i++){
    		a[i]='0';
    	}
    }
    else len=lena;
    int ans[22];
	int temp=0;
    for(int i=0;i<len;i++){
    	if(table[i]=='0') table[i]='0'+10;
    	ans[i]=(a[i]-'0'+b[i]-'0'+temp)%(table[i]-'0');
    	temp=(a[i]-'0'+b[i]-'0'+temp)/(table[i]-'0');
    }
    //
    int l=len;//是下一个长度 
    if(l==21) table[20]='0'+10;
    while(temp!=0){
    	ans[l]=temp%(table[l]-'0');
    	temp=temp/(table[l]-'0');
    	l++;
    }
    reverse(ans,ans+l);  
    int p;
    for(int i=0;i<l;i++){
    	if(ans[i]!=0){
    		p=i;
    		break;
    	}
    }
    for(int i=p;i<l;i++){
    	printf("%d",ans[i]);
    }
    return 0;
}
