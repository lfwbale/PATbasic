#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int max=-1;
	int min=20001;
	int id,x,y,temp;
	int laji,niubi;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&id,&x,&y);
		temp=x*x+y*y;
		if(temp>max){
			max=temp;
			laji=id;
		}
		if(temp<min){
			min=temp;
			niubi=id;
		}
	}
	printf("%04d %04d",niubi,laji);
	return 0;
}
