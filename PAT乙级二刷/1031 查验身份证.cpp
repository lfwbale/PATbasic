#include<stdio.h>
#include<string.h>
int isreasonalable(char a[]){
	int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char c[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	for(int i=0;i<17;i++){
		if(a[i]<'0'||a[i]>'9') return 0;
	}
	int sum=0;
	for(int i=0;i<17;i++){
		sum=sum+(a[i]-'0')*b[i];
	}
	sum=sum%11;
	if(c[sum]==a[17]) return 1;
	else return 0; 
}
int main(){
	int n;
	scanf("%d",&n);
	char id[n][20];
	for(int i=0;i<n;i++){
		scanf("%s",id[i]);
	}
	int flag=0;
	for(int i=0;i<n;i++){
		if(isreasonalable(id[i])==0){
			flag=1;
			printf("%s\n",id[i]);
		}
	}
	if(flag==0) printf("All passed");
	return 0;
}
