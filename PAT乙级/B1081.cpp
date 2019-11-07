#include<stdio.h>
#include<string.h>
int main(){
	int n;scanf("%d",&n);
	getchar();
	char a[n][100];
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	int flagshu,flagzimu,flagbuhefa;
	for(int i=0;i<n;i++){
		flagshu=0;flagzimu=0;flagbuhefa=0;
		if(strlen(a[i])<6){
		 printf("Your password is tai duan le.\n");
		 continue;
	}
		for(int j=0;j<strlen(a[i]);j++){
     if((a[i][j]<='z'&&a[i][j]>='a')||(a[i][j]<='Z'&&a[i][j]>='A')){
				flagzimu=1;
			}
			else if(a[i][j]>='0'&&a[i][j]<='9'){
				flagshu=1;
			}
			else if(a[i][j]!='.'){
				flagbuhefa=1;
				break;
			}
		}
	  if(flagzimu==1&&flagshu==0&&flagbuhefa==0){
			printf("Your password needs shu zi.\n");
			continue;
		}
		else if(flagshu==1&&flagzimu==0&&flagbuhefa==0){
			printf("Your password needs zi mu.\n");
			continue;
		}
		else if(flagshu==1&&flagzimu==1&&flagbuhefa==0){
			printf("Your password is wan mei.\n");
		}
		else if(flagshu==0&&flagzimu==0&&flagbuhefa==0){
			printf("Your password is wan mei.\n");
		}
		else if(flagbuhefa==1){
			printf("Your password is tai luan le.\n");
		}
	}
	return 0;
}
