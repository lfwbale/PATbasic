#include<stdio.h>
int main(){
	char a[100000];
	char b[100000];
	int d,n;scanf("%d %d",&d,&n);
	int length=1;
	a[0]=d+'0';
    for(int i=2;i<=n;i++){
    	int p=0,num=0;
    		for(int j=0;j<length;j++){
    			if(a[j]==a[j+1]){
    				num++;
    			} 
    			else{
    			b[p++]=a[j];
				b[p++]=num+1+'0';
				num=0;	
    			}
    		}
    length=p;
    for(int i=0;i<length;i++){
    	a[i]=b[i];
    }
    }
    for(int i=0;i<length;i++){
    	printf("%c",a[i]);
    }
    return 0;
}
