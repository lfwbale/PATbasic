#include<stdio.h>
int prime(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(){
	int l,k;
	scanf("%d %d",&l,&k);
	char a[1010];
	scanf("%s",a);
	for(int i=0;i<=l-k;i++){
		int temp=0;
		for(int j=0;j<k;j++){
			temp = temp*10+a[i+j]-'0';
		}
		if(prime(temp)==1){
			for(int j=0;j<k;j++) printf("%c",a[i+j]);
			return 0;
		}
	}
	printf("404");
	return 0;
	 
}
