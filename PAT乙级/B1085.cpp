#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
	char id[7];
	int grade;
	char school[7];
	int flag;
};
struct university{
	int sum;
	int count;
	char name[7];
}; 
bool cmp(university a,university b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	else if(a.count!=b.count) return a.count<b.count;
	else return strcmp(a.name,b.name)<0; 
}
int main(){
	int n;
	scanf("%d",&n);
	student a[n];
    university b[n];
    int num=0,flag1;//用于记录学校数 
	for(int i=0;i<n;i++){
		scanf("%s %d %s",a[i].id,&a[i].grade,a[i].school);
		a[i].flag=0;
		for(int k=0;k<strlen(a[i].school);k++){
			if(a[i].school[k]>='A'&&a[i].school[k]<='Z')
			a[i].school[k]=a[i].school[k]-'A'+'a';
		}
		flag1=0;
    		for(int j=0;j<num;j++){
    			if(strcmp(b[j].name,a[i].school)==0){
    				flag1=1;
    				break;
    			}
    		}
    		if(flag1==0){
    			strcpy(b[num].name,a[i].school);
    			b[num].sum=0;
    			b[num].count=0;
    			num++;
    		}
		}
    for(int i=0;i<num;i++){
    	for(int j=0;j<n;j++){
    		if(a[j].flag==0){
    			if(strcmp(a[j].school,b[i].name)==0){
    				b[i].count++;
    	            if(a[j].id[0]=='A') b[i].sum=b[i].sum+a[j].grade;
		            else if(a[j].id[0]=='B') b[i].sum=b[i].sum+a[j].grade*2/3;
	            	else if(a[j].id[0]=='T') b[i].sum=b[i].sum+a[j].grade*3/2;
    			a[j].flag=1;
				}
    		}
    	}
    }
    sort(b,b+num,cmp);
    printf("%d\n",num);
    printf("1 %s %d %d\n",b[0].name,b[0].sum,b[0].count);
	int k=1;int temp=1;
    for(int k=1;k<num;k++){
    	if(b[k].sum==b[k-1].sum) printf("%d",temp);
    	else {
    		printf("%d",k+1);
    		temp=k+1;
    	}
    	printf(" %s %d %d\n",b[0].name,b[0].sum,b[0].count);
    }
	return 0;	
}
