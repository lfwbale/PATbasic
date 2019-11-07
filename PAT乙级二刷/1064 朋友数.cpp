#include<stdio.h>
int frien(int n){
	int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	int temp,num;
	int count=0;
	int hashtable[40]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		num=frien(temp);
		if(hashtable[num]==0){
			count++;
			hashtable[num]=1;
		}
	}
	printf("%d\n",count);
	for(int i=0;i<37;i++){
		if(hashtable[i]==1){
			printf("%d",i);
			count--;
			if(count!=0) printf(" ");
		}
	}
	return 0;
} 
