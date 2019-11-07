#include<stdio.h>
#include<string.h>
int main(){
   char str[1010];
   char substr[1010];
   scanf("%s %s",str,substr);
   int lena=strlen(str);
   int lenb=strlen(substr);
   int a[130],b[130];
   memset(a,0,sizeof(a));
   memset(b,0,sizeof(b));
   for(int i=0;i<lena;i++){
   	a[str[i]]++;
   }
   for(int i=0;i<lenb;i++){
   	b[substr[i]]++;
   }
   int flag=0,sum1=0,sum2=0;
   
   for(int i=0;i<130;i++){
   	if(b[i]>a[i]){
   		flag=1;
   		sum2=sum2+b[i]-a[i];
   	}
   	else{
   		sum1=sum1+a[i]-b[i];
   	}
   }
   if(flag==0){
   	printf("Yes %d",sum1);
   }
   else printf("No %d",sum2);
   return 0;	
}
