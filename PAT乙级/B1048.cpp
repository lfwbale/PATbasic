#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c[100],d[100];
	scanf("%s %s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int len;
	if(lena<lenb){
		len=lenb;
	for(int i=0;i<lenb-lena;i++){
		c[i]='0';
	}
	for(int i=0;i<lena;i++){
		c[lenb-lena+i]=a[i];
	}
	for(int i=0;i<lenb;i++){
		d[i]=b[i];
	}
	}
	else if(lena>lenb){
		len=lena;
		for(int i=0;i<lena-lenb;i++){
		d[i]='0';
	}
		for(int i=0;i<lenb;i++){
			d[lena-lenb+i]=b[i];
		}
		for(int i=0;i<lena;i++){
			c[i]=a[i];
		}
	}
	else{
		len=lenb;
		for(int i=0;i<len;i++){
			c[i]=a[i];
			d[i]=b[i];
		}
	}
	 
	int flag=1,temp;
   for(int i=len-1;i>=0;i--){
	   if(flag%2==1){
	   	temp=(c[i]-'0'+d[i]-'0')%13;
	   	if(temp==10) a[i]='J';
	   	else if(temp==11) a[i]='Q';
	   	else if(temp==12) a[i]='K';
	   	else a[i]=temp+'0';
	   }
	   else{
	   	temp=d[i]-c[i];
	   	if(temp<0) temp=temp+10;
	   	a[i]=temp+'0';
	   }
	   flag++;
    }
    for(int i=0;i<len;i++){
    	printf("%c",a[i]);
    	}
   
	return 0;
} 
