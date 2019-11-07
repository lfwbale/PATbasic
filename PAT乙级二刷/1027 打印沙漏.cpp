#include<stdio.h>
int main(){
	int n;char c;int m;
	scanf("%d",&n);
	getchar();
	scanf("%c",&c);
	int biggest=1,sum=1;
	while(sum<=n){
		biggest=biggest+2;
		sum=sum+2*biggest;
	}
	sum=sum-2*biggest;
	biggest=biggest-2;
	m=n-sum;
	for(int i=0;i<(biggest+1)/2;i++){
		for(int j=0;j<i;j++) printf(" ");
		for(int j=0;j<biggest-i*2;j++) printf("%c",c);
		printf("\n");	
	}
    int line=(biggest-1)/2;
    for(int i=3;i<=biggest;i=i+2){
    	for(int k=0;k<(biggest-i)/2;k++) printf(" ");
    	for(int k=0;k<i;k++) printf("%c",c);
    	printf("\n");
    }
    printf("%d",m);
	return 0;
}
