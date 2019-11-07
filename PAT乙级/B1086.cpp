#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int mul=a*b;
	int k;
	int s[50];
	int num=0;
	if(mul==0) printf("0");
	else{
	   while(mul>0){
	   	s[num]=mul%10;
	   	mul=mul/10;	
	   	num++;
	   }
	   for(int i=0;i<num;i++){
	   	if(s[i]!=0) {
	   		k=i;
	   		break;
	   	}
	   }
	   for(int i=k;i<num;i++){
	   	printf("%d",s[i]);
	   } 
    }
    return 0;
}
