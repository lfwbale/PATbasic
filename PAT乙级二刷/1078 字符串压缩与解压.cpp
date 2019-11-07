#include<stdio.h>
#include<string.h>
int main(){
	char c;
	scanf("%c",&c);
	getchar();
	char a[1010];
	gets(a);
	if(c=='D'){
		int temp,i=0;
		while(i<strlen(a)){
			temp=0;
			while(a[i]>='0'&&a[i]<='9'){
				temp=temp*10+a[i]-'0';
				i++;
			}
			if(temp==0){
				printf("%c",a[i]);
				i++;
				continue;
			}
			if(temp>0){
				for(int j=0;j<temp;j++) printf("%c",a[i]);
				i++;
			}
		}	
	}
	//¿¼ÂÇÑ¹Ëõ
	else{
		int len=strlen(a);
		int i=0,num=1;char p=a[0];
		while(i<strlen(a)){
			num=1;
			while(a[i+1]==a[i]){
				num++;
				i++;
				if(i==strlen(a)) break;
			}
			if(num==1) printf("%c",a[i]);
			else printf("%d%c",num,a[i]);
			i++;
		}
		
	} 
	return 0;
} 
