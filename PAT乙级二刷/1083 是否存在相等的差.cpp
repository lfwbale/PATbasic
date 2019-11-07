#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n;scanf("%d",&n);
	int a[n+1];
	int b[n];
	memset(b,0,sizeof(b));
	int temp;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		temp=fabs(a[i]-i);
		b[temp]++;
	}
	for(int i=n-1;i>=0;i--){
		if(b[i]>=2){
			printf("%d %d\n",i,b[i]);
		}
	}
	return 0;
}
