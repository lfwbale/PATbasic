#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
	char name[5];
	int k;
};
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int hashtable[10000]={0};
	int temp;
	for(int i=0;i<m;i++){
		scanf("%d",&temp);
		hashtable[temp]=1;
	}
	int psnum=0,ptnum;//问题学生数，问题东西数 
	int sum=0;//问题总数 
    int flag;
	int temp2;
	student s[n];
	for(int i=0;i<n;i++){
		scanf("%s %d",s[i].name,&s[i].k);
		ptnum=0;flag=0;
		for(int j=0;j<s[i].k;j++){
			scanf("%d",&temp2);
			if(hashtable[temp2]==1) {
			ptnum++;
			flag=1;
			if(ptnum==1) {
			printf("%s: %04d",s[i].name,temp2);
			psnum++;
		}
		    else printf(" %04d",temp2);
		}
			
		}
				if(flag==1) printf("\n");
		sum=sum+ptnum;
	}
printf("%d %d",psnum,sum);
    return 0;
} 
