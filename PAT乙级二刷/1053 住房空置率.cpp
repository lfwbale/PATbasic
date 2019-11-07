#include<stdio.h>
int main(){
	int N,D;
	double e;
	scanf("%d %lf %d",&N,&e,&D);
	//Num1表示可能空置 Num2表示空置 
	int num1=0,num2=0;
	for(int i=0;i<N;i++){
		int k;scanf("%d",&k);
		int day=0;
		for(int j=0;j<k;j++){
			double temp;scanf("%lf",&temp);
			if(temp<e) day++;
		}
		if(day>k/2&&k>D) num2++;
		else if(day>k/2&&k<=D) num1++;
	} 
	double n1=num1*1.0/N*100;
	double n2=num2*1.0/N*100;
	printf("%.1f%% %.1f%%",n1,n2);
	return 0;
}
