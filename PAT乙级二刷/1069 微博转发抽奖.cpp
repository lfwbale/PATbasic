#include<stdio.h>
#include<string.h>
int main(){
	int m,n,s;//转发总量，中奖间隔，第一位中奖者序号
	scanf("%d %d %d",&m,&n,&s); 
	char a[1010][25];
	char b[1010][25];
	for(int i=1;i<=m;i++){
		scanf("%s",a[i]);
	}
	if(m<s) printf("Keep going...");
	else{
		int i=s,num=0;
		printf("%s\n",a[s]);
		for(int j=0;j<strlen(a[s]);j++){
			b[num][j]=a[s][j];
		}
		num++;
		i=i+n;
		while(i<=m){
			int flag=1;
			for(int j=0;j<num;j++){
				if(strcmp(b[j],a[i])==0){
				flag=0;
				break;	
				}
			}
			if(flag==0){
				i++;
				continue;
			}
			else{
				printf("%s\n",a[i]);
				for(int j=0;j<strlen(a[i]);j++){
				b[num][j]=a[i][j];	
				}	
				num++;
				i=i+n;
			}
		}
	}
	return 0; 
}
