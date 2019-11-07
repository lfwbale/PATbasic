#include<stdio.h>
#include<string.h>
int main(){
	int d,n;
	scanf("%d %d",&d,&n);
	if(n==1) printf("%d",d);
    else{
    	int a[100000],b[100000];
    	a[0]=d;int k=1,num,begin,len;
         for(int c=1;c<n;c++){
         	len=k;
         	k=0;begin=0;
         	while(begin<len){
         		num=0;
         		for(int j=begin;j<len;j++){
         			if(j!=len-1){
         			if(a[begin]==a[j]) num++;
         			else {
         				b[k]=a[begin];
         				b[k+1]=num;
         				k=k+2;
         				begin=begin+num;
         				break;
         			}
         		}
         		if(j==len-1){
         			if(a[begin]==a[j]){
         				num++;
         				b[k]=a[begin];
         				b[k+1]=num;
         				k=k+2;
         				begin=len;
         				break;
         			}
         			else{
         				b[k]=a[begin];
         				b[k+1]=num;
         				k=k+2;
         				b[k]=a[j];
         				b[k+1]=1;
         				k=k+2;
         				begin=len;
         				break;
         			}
         		}
         		}
         	}
         	for(int i=0;i<k;i++){
         		a[i]=b[i];
         	}
         	
         }
	for(int i=0;i<k;i++){
		printf("%d",a[i]);
	}
    	}
    
	return 0;
} 
