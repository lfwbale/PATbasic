#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char a[1015],b[1015],c[1015];
	scanf("%s",a);
	int flag1=0,flag2;
	int flag3=1;
	int k=strlen(a),temp;
	int len;
    for(int i=0;i<=k/2;i++){
    	if(a[i]!=a[k-i-1]){
    		flag3=0;
    		break;
    	}
    }
    if(flag3==1) printf("%s is a palindromic number.",a);
    else{
	for(int i=0;i<10;i++){
		for(int j=0;j<k;j++){
			printf("%c",a[j]);
		}
		printf(" + ");
		for(int j=0;j<k;j++){
			b[j]=a[k-j-1];
		}
		for(int j=0;j<k;j++){
			printf("%c",b[j]);
		}
		
		printf(" = ");
		len=k;
		k=0;temp=0;
		for(int j=len-1;j>=0;j--){
		    c[k]=(a[j]-'0'+b[j]-'0'+temp)%10+'0';
		    temp=(a[j]-'0'+b[j]-'0'+temp)/10;
		    k++;
		}
		if(temp==1) {
		c[k]='1';
		k++;
	    }
	    reverse(c,c+k);
	    for(int j=0;j<k;j++){
	    	printf("%c",c[j]);
	    	a[j]=c[j];
	    }
	    printf("\n");
	    flag2=0;
	    for(int j=0;j<=k/2;j++){
			if(c[j]!=c[k-j-1]){
				flag2=1;
				break;
			}
		}
		if(flag2==0){
			for(int j=0;j<k;j++) printf("%c",c[j]);
			printf(" is a palindromic number.");
			flag1=1;
			break;
		}
	}
}
	if(flag1==0&&flag3!=1) printf("Not found in 10 iterations.");
	return 0;
} 
