//ÈýË¢±Ø¿´ 
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
int main(){
	int m,n,tol;
	scanf("%d %d %d",&m,&n,&tol);
	map<int,int> mp;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			if(mp.find(a[i][j])!=mp.end()) mp[a[i][j]]++;
			else mp[a[i][j]]=1;
		}
	}
	for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
		if(it->second!=1) mp.erase(it);
	} 
	int num=0,temp,x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){ 
			if(mp.find(a[i][j])!=mp.end()){
			if(i>0&&fabs(a[i][j]-a[i-1][j])<=tol) continue;
			if(i>0&&j>0&&fabs(a[i][j]-a[i-1][j-1])<=tol) continue;
			if(i>0&&j<m-1&&fabs(a[i][j]-a[i-1][j+1])<=tol) continue;
			if(j>0&&fabs(a[i][j]-a[i][j-1])<=tol) continue;
			if(j<m-1&&fabs(a[i][j]-a[i][j+1])<=tol) continue;
			if(i<n-1&&fabs(a[i][j]-a[i+1][j])<=tol) continue;  
			if(i<n-1&&j>0&&fabs(a[i][j]-a[i+1][j-1])<=tol) continue;
			if(i<n-1&&j<m-1&&fabs(a[i][j]-a[i+1][j+1])<=tol) continue;
			num++;
			if(num>1){
				printf("Not Unique");
				return 0;
			}
			temp=a[i][j];
			x=j+1;
			y=i+1;
			}
		}
	}
	if(num==0) printf("Not Exist");
	if(num==1) printf("(%d, %d): %d",x,y,temp);
	return 0;
}

