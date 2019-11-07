#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int real[n+1];
	int a[n+1];//令好人为1，坏人为-1 
	int ans[n+1];//用于判断 
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int flag=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			fill(real,real+n+1,1);
			real[i]=-1;real[j]=-1;//i j为狼
			int count=0;
			for(int k=1;k<=n;k++){
				if(a[k]*real[abs(a[k])]<0) count++;
				if(count>2) break;
			} 
			if(count==2&&(a[i]*real[abs(a[i])]*a[j]*real[abs(a[j])]<0)){
				flag=1;
				printf("%d %d",i,j);
				return 0;
			}
		}
	}
	if(flag==0) printf("No Solution");
	return 0;
}
