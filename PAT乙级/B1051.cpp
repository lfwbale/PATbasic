#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,d;//a(cos(b)+isin(b)
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	double A1=a*cos(b);double B1=a*sin(b);
	double A2=c*cos(d);double B2=c*sin(d);
	double A=A1*A2-B1*B2;
	double B=A1*B2+A2*B1;
	if(fabs(A)<0.05) A=0;
	if(fabs(B)<0.05) B=0;
	printf("%.2f",A);
	if(B>=0) printf("+");
	printf("%.2fi",B);
	return 0;
}
