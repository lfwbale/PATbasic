#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	double sum=a[0];
	for(int i=1;i<n;i++){
		sum = (sum+a[i])*1.0/2;
	}
	printf("%d",(int)sum);
	return 0;
} 
