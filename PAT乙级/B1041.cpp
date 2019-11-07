#include<stdio.h>
struct student{
	char num[17];
	int tryc;
	int test;
};
int main(){
	int n;
	scanf("%d",&n);
	student stu[n];
	int hashtable[n+1];
	for(int i=0;i<n;i++){
		scanf("%s%d %d",stu[i].num,&stu[i].tryc,&stu[i].test);
		hashtable[stu[i].tryc]=stu[i].test;
	}
	int m;
	scanf("%d",&m);
	int b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i]==stu[j].tryc){
				printf("%s %d\n",stu[j].num,hashtable[stu[j].tryc]);
				
			} 
			
		}
	}
	return 0;
}
