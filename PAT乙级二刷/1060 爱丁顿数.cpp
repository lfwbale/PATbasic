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
	int temp=(a[n-1]>n)?n:a[n-1];
	for(int i=temp;i>=a[0]-1;i--){
		int num=0;
		for(int j=n-1;j>=0;j--){
			if(a[j]>i){
				num++;
				if(num>=i) {
				printf("%d",i);
				return 0;
				}
			}
			else{
				break;
			}
		}
	}
}
