#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int hashtable[100010];
	memset(hashtable,-1,sizeof(hashtable));
	int tempt1,tempt2;
	for(int i=0;i<n;i++){
		scanf("%d %d",&tempt1,&tempt2);
		hashtable[tempt1]=tempt2;
		hashtable[tempt2]=tempt1;
	}
    int flag[100010];
    memset(flag,-1,sizeof(flag));
	int shit;
	int temp;
	int isok;
	for(int i=0;i<m;i++){
		scanf("%d",&shit);
		for(int j=0;j<shit;j++){
			scanf("%d",&temp);
			flag[temp]=1;
	  }
	  isok=1;
	  for(int k=0;k<100010;k++){
	  	if(flag[k]==1&&flag[hashtable[k]]==1){
	  		isok=0;
	  		break;
	  	}
	  }
	  if(isok==0) printf("No\n");
	  else if(isok==1) printf("Yes\n");
	  memset(flag,-1,sizeof(flag));
	}
	return 0;
}
