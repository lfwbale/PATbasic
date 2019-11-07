#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int hashtable[50000]={0};
	int num=0,sum;
	for(int i=1;i<=n;i++){
		sum=i/2+i/3+i/5;
		if(hashtable[sum]==0){
			num++;
			hashtable[sum]=1;
		}
	} 
	printf("%d",num);
	return 0;
}
