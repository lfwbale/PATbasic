#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char c='A';
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			printf("%c ",c);
			c=c+1;
			if(j==i-1) printf("\n");
		}
	}
	return 0;
}
