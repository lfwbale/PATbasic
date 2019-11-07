#include<stdio.h>
int main(){
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	double c=(c2-c1)*1.0/100;
	int time;
	if((c-(int)c)>=0.5) time=(int)c+1;
	else time=(int)c;
	int hour,min,second;
	hour=time/3600; time=time%3600; 
	min=time/60; 
	second=time%60;
	printf("%02d:%02d:%02d",hour,min,second);
	return 0;
} 
