#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int m,x,y;
	scanf("%d %d %d",&m,&x,&y);
	int a,b,temp;
	double c,c1,c2;
	int hash[100]={0};
	int flag=0;
	for(int i=9;i>0;i--){
		for(int j=9;j>=0;j--){
			a=i*10+j;
			b=i+j*10;
			temp=abs(a-b);	
			c1=temp*1.0/x;
			c2=b*1.0/y;		
			if(c1==c2){
				flag=1;
				hash[a]=1;
			}
		}
	}
	if(flag==0) printf("No Solution");
	else{
		for(int i=99;i>=10;i--){
			if(hash[i]==1){
				a=i;
				break;
			}
		}
		b=(a%10)*10+a/10;
		c=b*1.0/y;
		printf("%d",a);
		if(m>a) printf(" Gai");
		if(m==a) printf(" Ping");
		if(m<a) printf(" Cong"); 
		if(m>b) printf(" Gai");
		if(m==b) printf(" Ping");
		if(m<b) printf(" Cong");
		if(m>c) printf(" Gai");
		if(m==c) printf(" Ping");
		if(m<c) printf(" Cong");
	}
	return 0;
} 
