#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[n][20];
	getchar();
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	int ans;
    int len=strlen(a[0]);
    for(int i=0;i<n;i++){
    	for(int j=0;j<len;j++){
    		if(a[i][j]=='T'){
    			ans=a[i][j-2]-'A'+1;
    			printf("%d",ans);
    			break;
    		}
    	}
    }
    return 0;
}
