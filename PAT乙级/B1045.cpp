#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int n;scanf("%d",&n);
	int a[n],flag[n];
	memset(flag,0,sizeof(flag));
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			flag[i]=1;
		}
		else min=a[i];
	}
	int max=a[n-1];
	for(int i=n-2;i>=0;i--){
		if(a[i]>max){
			flag[i]=1;
		}
		else max=a[i];
	}
	int count=0;
	int b[n];
	for(int i=0;i<n;i++){
		if(flag[i]==0){
			b[count]=a[i];
			count++;
		}
	}
	printf("%d\n",count);
	if(count>0){
	sort(b,b+count);
	printf("%d",b[0]);
	for(int i=1;i<count;i++){
		printf(" %d",b[i]);
	}
}
	else{
		printf("\n") ;
	}
	return 0;
}
