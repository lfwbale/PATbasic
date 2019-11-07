#include<stdio.h>
#include<string.h>
int main(){
	char a[110];
	char b[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int ans[5];
	scanf("%s",a);
	int sum=0;//Êý×ÖºÍ 
	for(int i=0;i<strlen(a);i++){
		sum+=a[i]-'0';
	}
    if(sum==0) printf("ling");
    else{
    	int count=0;
    	while(sum!=0){
    		ans[count]=sum%10;
    		sum=sum/10;
    		count++;
    	}
    	int q;
    	for(int i=count-1;i>=0;i--){
    		q=ans[i];
    		printf("%s",b[q]);
    		if(i!=0){
    			printf(" ");
    		}
    	} 
    }
    return 0;
	
}
