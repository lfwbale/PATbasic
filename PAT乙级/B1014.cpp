//部分正确 
#include<stdio.h>
#include<string.h>
const int maxn=100;
void change(int n){
	switch(n){
		case 1:
			printf("MON");
			break;
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
		case 7:
			printf("SUN");
			break;			
	}
}
int main(){
	char a[maxn],b[maxn],c[maxn],d[maxn];
	scanf("%s%s%s%s",a,b,c,d);
	int lena=strlen(a);
	int lenb=strlen(b);
	int lenc=strlen(c);
	int lend=strlen(d);
	int len1,len2;
	if(lena<lenb) {
	len1=lena;
    }
	else {	
	len1=lenb;
    }
	if(lenc<lend) 	{
    len2=lenc;
    }   
	else {
	len2=lend;
    }
	int day;
	int k;
	for(int i=0;i<len1;i++){
		if(a[i]==b[i]&&a[i]>='A'&&a[i]<='G'){
			k=i;
			day=a[k]-'A'+1;
			break;
		}
	}
	int hour;
	for(int i=k+1;i<len1;i++){
		if(a[i]==b[i]&&((a[i]>='0'&&a[i]<='9')||(a[i]>='A'&&a[i]<='N'))){
			if(a[i]>='A'&&a[i]<='N'){
				hour=a[i]-'A'+10;
			}
			else if(a[i]>='0'&&a[i]<='9'){
				hour=a[i]-'0';
			}
			break;
		}
	}
	int minute;
	for(int i=0;i<len2;i++){
		if(c[i]==d[i]&&((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))){
			minute=i;
			break;
		}
	}
	change(day);
	printf(" %02d:",hour);
	if(minute<10){
		printf("0%d",minute);
	}
	else printf("%d",minute);
	return 0;
	
}

