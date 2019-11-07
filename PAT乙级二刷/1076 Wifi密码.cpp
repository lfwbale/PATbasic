#include<stdio.h>
#include<string.h>
int main(){
	int n;scanf("%d",&n);
	char a[n][20];
	getchar();
	for(int i=0;i<n;i++) gets(a[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<15;j++){
			if(a[i][j]=='T'){
				printf("%d",a[i][j-2]-'A'+1);
			}
		}
	}
	return 0;
}
