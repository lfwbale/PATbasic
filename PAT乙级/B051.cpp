#include<stdio.h>
#incldue<math.h>
int main(){
	double a,b,c,d;//a(cos(b)+isin(b)
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	double A1=a*cos(b),B1=sin(b);
	double A2=c*cos(d),B2=sin(d);
	double A=A1*A2-B1*B2;
	double B=A1*B2+A2*B1;
	if(B>=0){
		printf("%.2f+%.2fi",A,B);
	} 
	else printf("%.2f%.2fi",A,B);
	return 0;
}
