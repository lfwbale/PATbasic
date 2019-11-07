#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int cake_num;
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&cake_num);
			a[j] += cake_num;
		}
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	printf("%d",max); 
	printf("\n");
	int num=1;
	for(int i=0;i<n;i++){
		if(a[i]==max){
			if(num>1) printf(" ");
			printf("%d",i+1);
			num++;
		}
	}
	return 0;
}
