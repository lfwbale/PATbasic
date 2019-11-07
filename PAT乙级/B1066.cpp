#include<stdio.h>
int main(){
	int m,n,a,b,temp;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&temp);
	int pic[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&pic[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(pic[i][j]>=a&&pic[i][j]<=b) printf("%03d",temp);
			else printf("%03d",pic[i][j]);
			if(j!=n-1) printf(" ");
		}
		if(i!=m-1) printf("\n");
	}
	return 0;
} 
