#include<stdio.h>
int main(){
	int hashtable[110]={0};
	int n;
	scanf("%d",&n);
	int temp;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		hashtable[temp]++;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		printf("%d",hashtable[temp]);
		if(i!=n-1) printf(" ");
	}
	return 0;
}
