#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int n1;
	int temp1,temp2,temp3;
	int temp=0;
	scanf("%d",&n);
	n1=n;
	int num[4];
	int a[4],b[4];
    for(int i=0;i<4;i++){
    	num[i]=n1%10;
    	n1=n1/10;
    }  
    if(num[0]==num[1]&&num[1]==num[2]&&num[3]==num[2]){
       printf("%d - %d = 0000",n,n);
    }
    else{
    	while(temp!=6174){
    		sort(num,num+4);
    		for(int i=0;i<4;i++){
    			a[i]=num[3-i];
    			b[i]=num[i];
    		}
    		temp1=a[0]*1000+a[1]*100+a[2]*10+a[3];
    		temp2=b[0]*1000+b[1]*100+b[2]*10+b[3];
    		temp=temp1-temp2;
    		temp3=temp;
    		for(int i=0;i<4;i++){
    	     num[i]=temp3%10;
    	      temp3=temp3/10;
           } 
    		printf("%04d - %04d = %04d\n",temp1,temp2,temp);
    	}
    }
    return 0;
    
}
