#include<stdio.h>
int main(){
	int a,b,d,c;
	scanf("%d %d %d",&a,&b,&d);
	c=a+b;
	if(c==0) printf("0");
	else{
		int ans[100];
		int num=0;
		while(c!=0){
			ans[num]=c%d;
			c=c/d;
			num++;
		}
		for(int i=num-1;i>=0;i--){
			printf("%d",ans[i]);
		}
	}
	return 0;
} 
