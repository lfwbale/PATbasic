#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];int num=0,temp;
	int b[40]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==0) b[0]=1;
		else{
			temp=0;
			while(a[i]!=0){
				temp=temp+a[i]%10;
				a[i]=a[i]/10;
			}
			b[temp]=1;
		}
	}
	for(int i=0;i<40;i++){
		if(b[i]==1) num++;
	}
	printf("%d\n",num);
	int k;
	for(int i=0;i<40;i++){
		if(b[i]==1){
			k=i;
			printf("%d",i);
			break;
		}
	}
	for(int i=k+1;i<40;i++){
		if(b[i]==1){
			printf(" %d",i);
		}
	}
return 0;	
}
