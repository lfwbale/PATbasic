#include<stdio.h>
//两个分数之间 不包含端点 
int gcd(int a,int b){
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main(){
	int a1,a2,b1,b2;
	int d;
	scanf("%d/%d %d/%d %d",&a1,&b1,&a2,&b2,&d);
	double min=a1*1.0/b1;
	double max=a2*1.0/b2;
	double temp;
	if(min>max){
		temp=min;
		min=max;
		max=temp;
	}
	int low=min*d;
	int high=(max+1)*d;
	int p;
	for(int i=low;i<high;i++){
		temp=i*1.0/d;
		if(temp>min&&temp<max&&gcd(i,d)==1){
			printf("%d/%d",i,d);
			p=i;
			break;
		}
	}
	for(int i=p+1;i<high;i++){
		temp=i*1.0/d;
		if(temp>min&&temp<max&&gcd(i,d)==1){
			printf(" %d/%d",i,d);
		}
	}
	return 0;
}
