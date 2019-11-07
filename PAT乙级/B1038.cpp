//运行超时，考虑时间换空间 
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int stu[n];
	for(int i=0;i<n;i++){
		scanf("%d",&stu[i]);
	}
	int k;
	scanf("%d",&k);
	int substu[k];
	for(int i=0;i<k;i++){
		scanf("%d",&substu[i]);
	}
	int a[k];
    memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(stu[i]==substu[j]){
				a[j]=a[j]+1;
				break;
			}
		}
	}
	printf("%d",a[0]);
	for(int i=1;i<k;i++){
		printf(" %d",a[i]);
	}
	return 0;
}
