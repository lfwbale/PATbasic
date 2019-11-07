#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	long long n,p;
	scanf("%lld %lld",&n,&p);
	long long a[n];
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	sort(a,a+n);
	long long max=1;long long temp;
	for(int i=0;i<n;i++){
		for(int j=i+max;j<n;j++){
			temp=a[i]*p;
			if(a[j]<=temp) max++;
			else break;
		}
	}
	printf("%d",max);
	return 0;
}
