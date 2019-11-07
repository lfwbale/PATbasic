#include<stdio.h> 
int main(){
	int n;char a;
	scanf("%d %c",&n,&a);
	int row=1,sum=1;
	while(sum<=n){
		sum=sum+2*(row+2);
		row=row+2;
	}
	int line=row-2;//有line行
	int q;//余数
	q=n-(sum-2*row) ;
	for(int j=0;j<line/2;j++){
		for(int k=0;k<j;k++){
			printf(" ");
		}
		for(int k=line-j*2;k>0;k--){
			printf("%c",a);
		}
		printf("\n");
	}
	for(int j=0;j<line/2;j++){
		printf(" ");
	}
	printf("%c\n",a);//上半部分+中间行 
	for(int j=1;j<=line/2;j++){
		int temp=line-(j*2+1);
		for(int k=0;k<temp/2;k++){
			printf(" ");
		}
		for(int k=0;k<1+2*j;k++){
			printf("%c",a);
		}
		printf("\n");
	}
	printf("%d",q);
	return 0;
	 
}
