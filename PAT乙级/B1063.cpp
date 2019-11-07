#include<stdio.h>
#include<math.h>
int main(){
	int n;scanf("%d",&n);
	int a,b;double max=0,c;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		c=(a*a+b*b)*1.0;
		if(sqrt(c)>max) max=sqrt(c); 
	}
	printf("%.2f",max);
	return 0; 
}
