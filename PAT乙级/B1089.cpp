#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int v[n+1];//表示这些人说的话 
	for(int i=1;i<=n;i++){
		scanf("%d",&v[i]);
	}
	int a[n+1];//用来存储身份，1为好 -1为狼 
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			vector<int> lie;
            fill(a,a+n+1,1);
            a[i]=-1;
            a[j]=-1;
            for(int k=1;k<=n;k++){
            	if(v[k]*a[abs(v[k])]<0) lie.push_back(k);
            } 
            if(lie.size()==2&&a[lie[0]]+a[lie[1]]==0){
            	printf("%d %d\n",i,j);
            	return 0;
            }
		}
	}
	printf("No Solution\n");
	return 0;
	
}
