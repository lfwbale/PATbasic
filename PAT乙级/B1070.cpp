#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n; scanf("%d",&n);
	int a[n]; 
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<n;i++){
		sum=(sum+a[i])/2;
	}
	printf("%d\n",sum);
	return 0;
}

