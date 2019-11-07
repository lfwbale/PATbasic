#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int legal(char a[]){
	int pointnum=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]!='.'&&a[i]!='-'&&(a[i]<'0'||a[i]>'9')) return 0;
		if(a[i]=='-'&&i!=0) return 0;
		if(a[i]=='.'){
			pointnum++;
			if(pointnum>1||strlen(a)-i>3) return 0;
		}
	}
	return 1;
}
int main(){
	int n;scanf("%d",&n);
	char a[n][100];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int flag,count=0;
	double sum=0;
	for(int i=0;i<n;i++){
		flag=legal(a[i]);
		//如果合法 
		if(flag==1){
			if(fabs(atof(a[i]))<=1000){
				count++;
				sum=sum+atof(a[i]);
			}
			else printf("ERROR: %s is not a legal number\n",a[i]);
		}
		else printf("ERROR: %s is not a legal number\n",a[i]);
	}
	if(count==0) printf("The average of 0 numbers is Undefined");
	else if(count==1) printf("The average of 1 number is %.2f",sum);
	else printf("The average of %d numbers is %.2f",count,sum*1.0/count);
	return 0;
}
