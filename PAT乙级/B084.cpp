#include<stdio.h>
#include<string.h>
int main(){
	int d,n;
	scanf("%d %d",&d,&n);
	if(n==1) printf("%d",d);
	else{
		int a[1000],b[1000];
		int l=1,len,num;
		a[0]=d;
		for(int i=0;i<n;i++){
			len=l;
			l=0;
			num=1;
			for(int j=0;j<len;j++){
				for(int k=j+1;k<len;k++){
					if(a[k]==a[j]) num++;
					else {
						b[l++]=a[j];
						b[l++]=num;
					} 
				}
			}
			for(int j=0;j<l;j++){
				a[j]=b[j];
			}
						
		}
		for(int j=0;j<l;j++)
		{
			printf("%d",a[j]);
		}
	}
	return 0;
} 
