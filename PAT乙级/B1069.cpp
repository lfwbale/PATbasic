#include<stdio.h>
#include<string.h>
int main(){
	int m,n,s;
	scanf("%d %d %d",&m,&n,&s);
	char a[m][25];
	int flag[m];
	memset(flag,0,sizeof(flag));
	for(int i=0;i<m;i++){
		scanf("%s",a[i]);
	} 
	printf("%s\n",a[s-1]);
	flag[s-1]=1;
	for(int i=s;i<m;i++){
		if(strcmp(a[s-1],a[i])==0) flag[i]=1;
	}
	int temp=s-1;
	while(temp<m){
	   temp=temp+n;
	   while(flag[temp]!=0&&temp<m){
	   temp++; 
	} 
	if(temp<m){
		printf("%s\n",a[temp]);
	for(int j=temp+1;j<m;j++){
		if(strcmp(a[temp],a[j])==0) flag[j]=1;
	}
    }
}
return 0;
}
