#include<stdio.h>
int main(){
	int n,m;//学生数，题数 
	scanf("%d %d",&n,&m);
	int g[m],ans[m];
	for(int i=0;i<m;i++){
		scanf("%d",&g[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&ans[i]);
	}
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=0;j<m;j++){
			if(a[i][j]==ans[j]) sum+=g[j];
		}
		printf("%d\n",sum);
	} 
	return 0;
}
