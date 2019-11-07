#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int b[m];
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	int ans[m];
	for(int i=0;i<m;i++) scanf("%d",&ans[i]);
	int a[m];int sum;
	for(int i=0;i<n;i++){
		 sum=0;
		for(int j=0;j<m;j++){
			scanf("%d",&a[j]);
			if(a[j]==ans[j]) {
				sum=sum+b[j];		
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
