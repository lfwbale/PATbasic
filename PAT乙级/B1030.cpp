#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	long long n,p;
	scanf("%lld%lld",&n,&p);
	long long a[n]; 
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	int max=1;
	for(int i=1;i<n;i++){
		if(a[i]>a[0]*p){
			break;
		}
		else{
			max++;
		}
	}
	int ans=max;
	for(int i=1;i<=n-max;i++){
		int count = max;
		for(int j=i+max;j<n;j++){
			if(a[j]>a[i]*p){
				break;
			}
			else{
				count++;
			}
		}
		if(count>ans){
			ans=count;
		}
	}
	printf("%d",ans);
	return 0;
} 
