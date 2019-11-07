#include<stdio.h>
int main(){
	int N,D;double e;
	scanf("%d %lf %d",&N,&e,&D);
	double a[N][1000];
	int day[N];
	for(int i=0;i<N;i++){
		scanf("%d",&day[i]);
		for(int j=0;j<day[i];j++){
			scanf("%lf",&a[i][j]);
		}
	}
	int count,num1=0,num2=0;
	for(int i=0;i<N;i++){
		count=0;
		for(int j=0;j<day[i];j++){
		if(a[i][j]<e) count++;
	}
	if(day[i]>D&&count>=day[i]/2+1) num1++;
	else if(day[i]<=D&&count>=day[i]/2+1) num2++;
	}
	double ans1=num2*1.0/N*100;
	double ans2=num1*1.0/N*100;
	printf("%.1f",ans1);
	printf("%% ");
	printf("%.1f",ans2);
	printf("%%");
	return 0;
}

