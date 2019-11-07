#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][4];
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]); 
	} 
	int num1=0,num2=0;
	for(int i=0;i<n;i++){
		if((a[i][1]==a[i][0]+a[i][2])&&a[i][1]!=a[i][3]) num1++;
		else if(a[i][1]!=a[i][3]&&a[i][3]==a[i][0]+a[i][2]) num2++;
	}
	printf("%d %d",num2,num1);
	return 0;
}
