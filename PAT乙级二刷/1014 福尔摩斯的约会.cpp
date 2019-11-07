#include<stdio.h>
#include<string.h>
int main(){
	char a[4][65];
	for(int i=0;i<4;i++){
		scanf("%s",a[i]);
	}
	int day,begin;;
	for(int i=0;i<strlen(a[0])&&i<strlen(a[1]);i++){
		if(a[0][i]==a[1][i]&&a[0][i]>='A'&&a[0][i]<='G'){
		   day=a[0][i]-'A';	
		   begin=i;
		   break;
		}
	}
	char week[8][5]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	printf("%s ",week[day]);
	int hour;
	for(int i=begin+1;i<strlen(a[0])&&i<strlen(a[1]);i++){
		if(a[0][i]==a[1][i]&&((a[0][i]>='A'&&a[0][i]<='N')||(a[0][i]>='0'&&a[0][i]<='9'))){
			if(a[0][i]>='0'&&a[0][i]<='9'){
				hour=a[0][i]-'0';
				break;
			}
			else if(a[0][i]>='A'&&a[0][i]<='N'){
				hour=a[0][i]-'A'+10;
				break;
			}
		}
	}
	printf("%02d:",hour);
	int min;
	for(int i=0;i<strlen(a[3])&&i<strlen(a[2]);i++){
		if(a[2][i]==a[3][i]&&((a[2][i]>='A'&&a[2][i]<='Z')||(a[2][i]>='a'&&a[2][i]<='z'))){
			printf("%02d",i);
			break;
		}
	}
	return 0;
	
}
