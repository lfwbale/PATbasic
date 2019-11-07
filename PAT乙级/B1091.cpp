#include<stdio.h>
int len(int n){
	int len=1;
	while(n>0){
		len=len*10;
		n=n/10;
	}
	return len;
}
int main(){
	int m;scanf("%d",&m);
	int a[m],l,flag;
	for(int i=0;i<m;i++) scanf("%d",&a[i]);
	for(int i=0;i<m;i++){
		l=len(a[i]);
		flag=0;
		for(int j=0;j<10;j++){
			if((a[i]*a[i]*j-a[i])%l==0){
				printf("%d %d\n",j,a[i]*a[i]*j);
				flag=1;
				break;
			}
        }
        if(flag==0) printf("No\n");
	}
	return 0;
}
