#include<stdio.h>
int main(){
	int m,n,al,b,normal;
	scanf("%d %d %d %d %d",&m,&n,&al,&b,&normal);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>=al&&a[i][j]<=b) a[i][j]=normal;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%03d",a[i][j]);
			if(j!=n-1) printf(" ");
		}
		if(i!=m-1) printf("\n");
	}
	return 0;
}
