#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int first,last,x,y,temp,id;
	int max=30000,min=0; 
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&id,&x,&y);
		temp=x*x+y*y;
		if(temp>min){
			last=id;
			min=temp;
		}
		if(temp<max){
			first=id;
			max=temp;
		}
	}
	printf("%04d %04d",first,last);
	return 0;
}
