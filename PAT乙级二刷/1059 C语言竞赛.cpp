#include<stdio.h>
int prime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int hashtable[10000]={0};
	int flag[10000]={0};
	int n;scanf("%d",&n);
	int id;
	for(int i=1;i<=n;i++){
		scanf("%d",&id);
		hashtable[id]=i;
	}
	int m;scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&id);
		printf("%04d: ",id);
		if(hashtable[id]==0) printf("Are you kidding?\n");
		else if(flag[id]==1) printf("Checked\n");
		else{
			flag[id]=1;
			if(hashtable[id]==1) printf("Mystery Award\n");
			else if(prime(hashtable[id])==1) printf("Minion\n");
			else printf("Chocolate\n");
		} 
	}
	return 0;
} 
