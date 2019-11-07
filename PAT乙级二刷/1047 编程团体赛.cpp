#include<stdio.h>
int main(){
	int hashtable[1010]={0};
	int n;scanf("%d",&n);
	int schoolnum,pernum,score;
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&schoolnum,&pernum,&score);
		hashtable[schoolnum] += score;
	}
	int max=0,school;
	for(int i=1;i<=1000;i++){
		if(hashtable[i]>max){
			max=hashtable[i];
			school=i;
		}
	}
	printf("%d %d",school,max);
	return 0;
} 
