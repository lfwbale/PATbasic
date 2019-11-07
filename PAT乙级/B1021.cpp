#include<stdio.h>
#include<string.h>
const int maxn=1010;
int main(){
	char a[maxn];
	scanf("%s",a);
	int len=strlen(a);
	int num[10]={0};
	for(int i=0;i<len;i++){
		switch(a[i]){
			case '0': num[0]++; break;
			case '1': num[1]++; break;
			case '2': num[2]++; break;
			case '3': num[3]++; break;
			case '4': num[4]++; break;
			case '5': num[5]++; break;
			case '6': num[6]++; break;
			case '7': num[7]++; break;
			case '8': num[8]++; break;
			case '9': num[9]++; break; 
		}
	}
	for(int i=0;i<10;i++){
		if(num[i]!=0){
			printf("%d:%d\n",i,num[i]);
		}
	}
	return 0;
}
