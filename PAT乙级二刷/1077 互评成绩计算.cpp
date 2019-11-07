#include<stdio.h>
void output(double n){
	if(n-(int)n>=0.5) printf("%d\n",(int)n+1);
	else printf("%d\n",(int)n); 
}
int main(){
	int n;
	int t;
	scanf("%d %d",&n,&t);
	int a[n][n];
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		scanf("%d",&a[i][j]);
    	}
    }
    double ave[n];
    for(int i=0;i<n;i++){
    	int sum=0,max=0,min=t,num=0;
    	for(int j=1;j<n;j++){
    		if(a[i][j]>=0&&a[i][j]<=t){
    			num++;
    			sum=sum+a[i][j];
    			if(max<a[i][j]) max=a[i][j];
    			if(min>a[i][j]) min=a[i][j];
    		}
    	}
    	ave[i]=(sum-max-min)*1.0/(num-2);
    }
    for(int i=0;i<n;i++){
    	ave[i]=(ave[i]+a[i][0])/2;
    	output(ave[i]);
    }
	 return 0;
}
