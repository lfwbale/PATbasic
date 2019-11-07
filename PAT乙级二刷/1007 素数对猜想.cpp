#include<stdio.h>
bool isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int hashtable[100000]={0};
	int n;scanf("%d",&n);
	bool flag;
	for(int i=2;i<=n;i++){
		flag=isprime(i);
		if(flag==true) hashtable[i]=1;
	}
	int num=0;
	for(int i=n;i>=2;i--){
		if(hashtable[i]==1&&hashtable[i-2]==1)
		num++;
	}
	printf("%d",num);
	return 0;
}
