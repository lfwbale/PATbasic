#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char a[111];
	char b[111];
	char c[111];
	int num=0;
	scanf("%s %s",a,b);
    int lena=strlen(a);
    int lenb=strlen(b);
    reverse(a,a+lena);
    reverse(b,b+lenb);
    for(int i=lena;i<111;i++) a[i]='0';
    for(int i=lenb;i<111;i++) b[i]='0';
    for(int i=0;i<111;i++){
    	if(i%2==0){
  			num=(a[i]-'0'+b[i]-'0')%13;
  			if(num<10) c[i]=num+'0';
  			else{
  				if(num==10) c[i]='J';
  				else if(num==11) c[i]='Q';
  				else if(num==12) c[i]='K';
  		  	  }
    	}
    	else{
    		num=b[i]-a[i];
    		if(num<0) num=num+10;
    		c[i]=num+'0';
    	}
    }
    int len=lenb;
    if(len<lena) len=lena;
    	reverse(c,c+len);

    for(int i=0;i<len;i++) printf("%c",c[i]);

    return 0;
}
