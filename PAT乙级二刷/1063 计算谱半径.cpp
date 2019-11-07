#include<stdio.h>
#include<math.h>
int main(){
	int n;scanf("%d",&n);
	//Êµ²¿ Ðé²¿real part,imaginary part
	double max=0;
	double mall;
	double real,imaginary;
	for(int i=0;i<n;i++){
		scanf("%lf %lf",&real,&imaginary);
		mall=real*real+imaginary*imaginary;
		if(max<mall) max=mall;
	} 
	printf("%.2f",sqrt(max));
	return 0;
}
