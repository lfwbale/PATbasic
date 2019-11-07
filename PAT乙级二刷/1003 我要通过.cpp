#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[n][110];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}

	for(int i=0;i<n;i++){
		int flag=1;
		int posP=-1,posT=-1;
		int nump=0,numt=0;
		int numl=0,nummid=0,numr=0;
		for(int j=0;j<strlen(a[i]);j++){
			if(a[i][j]!='P'&&a[i][j]!='A'&&a[i][j]!='T'){
				flag=0;
				break;
			}
			if(a[i][j]=='P'){
				posP=j;
				nump++;
				if(nump>1){
					flag=0;
					break;
				}
			}
			if(a[i][j]=='T'){
				posT=j;
				numt++;
				if(numt>1){
					flag=0;
					break;
				}
			}	
		}
		if(flag==1){
			if((posP-0)*(posT-posP-1)!=strlen(a[i])-1-posT||posT-1==posP){
				flag=0;
			} 
		}
		if(flag==0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
