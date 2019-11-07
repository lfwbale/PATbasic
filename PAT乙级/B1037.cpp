#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	int d,e,f;
	scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&d,&e,&f);//a.b.c d.e.f
	int should,fact;
	should=a*17*29+b*29+c;
	  fact=d*17*29+e*29+f;
	int ans=fabs(fact-should);
	if(should>fact) printf("-");
	int g=ans/(29*17);
	int s=(ans%(29*17))/29;
	int k=(ans%(29*17))%29;
	printf("%d",g);
	printf(".");
	printf("%d",s);
	printf(".");
	printf("%d",k);
	return 0;
}
