#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int a[105];
	memset(a,0,sizeof(a));
	int n;
	scanf("%d",&n);
	int temp;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		a[temp]++;
	}
	int k;
	scanf("%d",&k);
    scanf("%d",&temp);
    printf("%d",a[temp]);
    for(int i=1;i<k;i++){
    	scanf("%d",&temp);
    	printf(" %d",a[temp]);
    }
	return 0;
} 
