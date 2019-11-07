#include<stdio.h>
int glc(int a,int b){
	if(a%b==0) return b;
	else return glc(b,a%b);
}
int main(){
	int a1,b1,a2,b2,k;
	scanf("%d/%d %d/%d %d",&a1,&b1,&a2,&b2,&k);
	double A=a1*1.0/b1;
	double B=a2*1.0/b2;
	double temp;
	if(A>B){
		temp=A;
		A=B;
		B=temp;
	}
	double temp2;int p;
	for(int i=1;i<k;i++){
		temp2=i*1.0/k;
		if(glc(i,k)==1&&temp2<B&&temp2>A){
			p=i;
			printf("%d/%d",i,k);
			break;
		}
	}
	for(int i=p+1;i<k;i++){
		temp2=i*1.0/k;
		if(glc(i,k)==1&&temp2<B&&temp2>A){
			printf(" %d/%d",i,k);
		}
	}
	return 0;
}
