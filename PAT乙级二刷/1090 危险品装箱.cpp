#include<stdio.h>
#include<string.h>
#include<set>
using namespace std;
const int maxn=100010;
int main(){
	int b[maxn];
	int n,m;
	scanf("%d %d",&n,&m);
	set<int> a[maxn];
	int temp1,temp2;
	for(int i=0;i<n;i++){
		scanf("%d %d",&temp1,&temp2);
		a[temp1].insert(temp2);
		a[temp2].insert(temp1);
	}
	int count;
	for(int i=0;i<m;i++){
		scanf("%d",&count);
		int flag=0;
		int temp;
		memset(b,0,sizeof(b));
		for(int j=0;j<count;j++){
			scanf("%d",&temp);
			if(b[temp]==0){
				b[temp]=1;
				for(set<int>::iterator it=a[temp].begin();it!=a[temp].end();it++){
					b[*it]=1;
				}
			}
			else{
				flag=1;
			}
		}
		if(flag==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
