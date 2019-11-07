#include<stdio.h>
#include<math.h>
int main(){
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	float a=round((c2-c1)*1.0/100);
	int time=(int)a;
	int s=time%60;
	int minute=time/60;
	int m=minute%60;
	int h=minute/60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
	
} 
