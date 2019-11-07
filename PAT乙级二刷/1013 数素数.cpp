#include<stdio.h>
bool isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int num=0;
	int begin,end;
	for(int i=2;i<1000000;i++){
		if(isprime(i)==true) num++;
		if(num==m) {
			begin=i;
			break;
		}
	}
	int count=0;
	num=n-m+1;
	for(int i=begin;i<1000000;i++){
		if(isprime(i)==true){
			if(count%10!=9&&count!=num-1) printf("%d ",i);
			else if(count%10==9&&count!=num-1) printf("%d\n",i);
			else if(count==num-1){
				printf("%d",i);
				break;
			}
			count++;
		} 
		
	}
	return 0;
} 
