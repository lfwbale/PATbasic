//十进制转d进制 
#include<stdio.h>
const int maxn=100010;
int main(){
	int A,B,d;
	int a[maxn];
	scanf("%d%d%d",&A,&B,&d);
	int c=A+B;
	int num=0;
	if(c==0){
		printf("0");
	}
	else{
	while(c!=0){
		a[num]=c%d;
		c=c/d;
		num++;
    }
    for(int i=num-1;i>=0;i--){
    	printf("%d",a[i]);
    }
}
    return 0;
}
