#include<stdio.h>
#include<math.h>
#include<string.h>
//注意.不能在最后一位 
int main(){
	int n;
	scanf("%d",&n);
	char a[n][150];
	int flag[n];
	double b[n];
	memset(flag,0,sizeof(flag));
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++){
		//先看第一位
		if(a[i][0]!='-'&&a[i][0]>'9'&&a[i][0]<'0'){
			flag[i]=1;
			continue;
		} 
		else {
			//再看后面是否有英文字母 
			for(int j=1;j<strlen(a[i]);j++){
				if(a[i][j]!='.'&&a[i][j]>'9'&&a[i][0]<'0'){
					flag[i]=1;
					break;
				}
			}
			if(flag[i]==1) continue;
		}
		if(a[i][0]=='-'&&a[i][1]=='.'){
			flag[i]=1;
			continue;
		}
		//.后面最多两位且不能有. 
		for(int j=1;j<strlen(a[i]);j++){
			if(a[i][j]=='.'){
				if(strlen(a[i])-j>3){
					flag[i]=1;
					break;
				}
				else{
					for(int k=j+1;k<strlen(a[i]);k++){
						if(a[i][k]=='.'){
							flag[i]=1;
							break;
						}
					}
				}
				break;
			}
		}
	}
	//判断数是否是在范围内不
	int p;
	double zuopart,youpart;
	double wei;
	for(int i=0;i<n;i++){
		if(flag[i]==0){
			if(a[i][0]!='-'){
				zuopart=0;youpart=0;p=0;
				for(int j=0;j<strlen(a[i]);j++){
					if(a[i][j]=='.'){
						p=j;
						break;
					}
					else zuopart=zuopart*10+(a[i][j]-'0');
				}
				if(p!=0){
					wei=0.1;
					for(int j=p+1;j<strlen(a[i]);j++){
						youpart=youpart+(a[i][j]-'0')*wei;
						wei=wei*0.1;
					}
				}
				b[i]=zuopart+youpart;
			}
			if(a[i][0]=='-'){
				zuopart=0;youpart=0;p=0;
				for(int j=1;j<strlen(a[i]);j++){
					if(a[i][j]=='.'){
						p=j;
						break;
					}
					else zuopart=zuopart*10+(a[i][j]-'0');
				}
				if(p!=0){
					wei=0.1;
					for(int j=p+1;j<strlen(a[i]);j++){
						youpart=youpart+(a[i][j]-'0')*wei;
						wei=wei*0.1;
					}
				}
				b[i]=-(zuopart+youpart);
			}
		}
	} 
	int num=0;
	double sum=0;
	for(int i=0;i<n;i++){
		if(flag[i]==0){
			if(b[i]<=1000&&b[i]>=-1000){
				num++;
				sum=sum+b[i];
			}
			else printf("ERROR: %s is not a legal number\n",a[i]);
		}
		else printf("ERROR: %s is not a legal number\n",a[i]);
	}
	if(num==0){
		printf("The average of 0 numbers is Undefined");
	}
	else if(num==1){
		printf("The average of 1 number is %.2f",sum);
	}
	else{
		double ave=sum/num;
		printf("The average of %d numbers is %.2f",num,ave);
	}
	return 0;
}
