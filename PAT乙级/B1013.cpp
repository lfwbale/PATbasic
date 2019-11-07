//部分正确 
#include<stdio.h>
#include<math.h>
bool isPrime(int n){
	if(n<=1) return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0) 	return false;
}
	return true;

}
const int maxn=1001000;//100100部分正确 多加一个0 全对 
int prime[maxn];//素数表 
int count=0;
void creat_prime(int n){
	for(int i=1;i<maxn;i++){
		if(isPrime(i)==true){
			prime[count++]=i;
			if(count>n){
				break;
			}
		}
	}
}
int main(){
	int m,n;
	int num=0;
	scanf("%d%d",&m,&n);
	creat_prime(n);
	for(int i=m;i<=n;i++){
		printf("%d",prime[i-1]);
		num++;
		if(num%10!=0&&i<n) printf(" ");
		else printf("\n");
	}
	return 0;
}
