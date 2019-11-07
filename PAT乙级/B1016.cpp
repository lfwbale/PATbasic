#include<stdio.h>
#include<string.h>
const int maxn=1000000;
int main(){
	char a[maxn];
	char b[maxn];
    int da,db;
    scanf("%s%d%s%d",a,&da,b,&db);
    int lena=strlen(a);
    int lenb=strlen(b);
    int numa=0,numb=0;
    for(int i=0;i<lena;i++){
    	if(a[i]==da+'0'){
    		numa++;
    	}
    }
    for(int i=0;i<lenb;i++){
    	if(b[i]==db+'0'){
    		numb++;
    	}
    }   
    int suma=0,sumb=0;
    int tempa=1,tempb=1;
    for(int i=0;i<numa;i++){
    	suma=suma+da*tempa;
    	tempa=tempa*10;
    }
    for(int i=0;i<numb;i++){
    	sumb=sumb+db*tempb;
    	tempb=tempb*10;
    }
printf("%d",suma+sumb);
return 0;
} 
