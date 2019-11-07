#include<stdio.h>
#include<string.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	double sum[100]={0};
	int num;double temp;int min,max;
	for(int i=0;i<n;i++){
		num=0;temp=0;min=m;max=0;
		for(int j=1;j<n;j++){
			if(a[i][j]>=0&&a[i][j]<=m){
				if(a[i][j]>=max) max=a[i][j];
				if(a[i][j]<=min) min=a[i][j];
				temp=temp+a[i][j];
				num++;
			}
		}
		temp=temp-min-max;
		num=num-2;
		sum[i]=(temp*1.0/num+a[i][0])*1.0/2;
	}
	for(int i=0;i<n;i++){
		if(sum[i]-(int)sum[i]<0.5) printf("%d\n",(int)sum[i]);
		else printf("%d\n",(int)sum[i]+1);
	}
	return 0;
} 
