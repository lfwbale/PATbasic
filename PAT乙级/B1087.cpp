#include<stdio.h>
int main(){
	int hashtable[50000]={0};
	int n;scanf("%d",&n);
	int temp,num=0;
	for(int i=1;i<=n;i++){
		temp=i/2+i/3+i/5;
		if(hashtable[temp]==0){
			num++;
			hashtable[temp]=1;
		}
	}
	printf("%d",num);
	return 0;
}
