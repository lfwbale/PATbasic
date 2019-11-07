#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char a[n][88];
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	for(int i=0;i<n;i++){
		if(strlen(a[i])<6){
			printf("Your password is tai duan le.\n");
			continue;
		}
		else{
			int flag=1;
			for(int j=0;j<strlen(a[i]);j++){
				if((a[i][j]<'0'||a[i][j]>'9')&&(a[i][j]<'a'||a[i][j]>'z')&&(a[i][j]<'A'||a[i][j]>'Z')&&a[i][j]!='.'){
					flag=0;
					printf("Your password is tai luan le.\n");
					break;
				}
		    }  
			if(flag==0) continue;
			else{
			int num=0,letter=0;
			for(int j=0;j<strlen(a[i]);j++){
				if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')) letter++;
				if(a[i][j]>='0'&&a[i][j]<='9') num++;
			}
			if(num==0) printf("Your password needs shu zi.\n");
			else if(letter==0) printf("Your password needs zi mu.\n");
			else if(num>0&&letter>0) printf("Your password is wan mei.\n");
		    }
		}
	}
	return 0;
}
