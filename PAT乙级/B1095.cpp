#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
	char id[15];
	char level;//等级 
	int kcid;//考场号 
	int zwid;//考生号 
	int date;//考试日期 
	int grade;
}; 
//针对情况三； 
struct kcinformation{
	int snum;
	int kid;
};
bool cmp1(student a,student b){
	if(a.grade!=b.grade) return a.grade>b.grade;
	else return strcmp(a.id,b.id)<0;
}
bool cmp2(kcinformation a,kcinformation b){
	if(a.snum!=b.snum) return a.snum>b.snum;
	else return a.kid<b.kid;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	student a[n];
	kcinformation hashtable[1000];
	for(int i=0;i<n;i++){
		scanf("%s %d",a[i].id,&a[i].grade);
		a[i].level=a[i].id[0];
		a[i].kcid=(a[i].id[1]-'0')*100+(a[i].id[2]-'0')*10+(a[i].id[3]-'0');
	} 
	int type;
	char jibie;int kaochang;char riqi[8];
	int num,sum;
	for(int j=1;j<=m;j++){
		scanf("%d",&type);
		if(type==1){
			getchar();
			num=0;
			scanf("%c",&jibie);
			sort(a,a+n,cmp1);
			printf("Case %d: 1 %c\n",j,jibie);
			for(int i=0;i<n;i++){
				if(a[i].level==jibie){
					printf("%s %d\n",a[i].id,a[i].grade);
					num++;
				}
			}
			if(num==0) printf("NA\n");
		}
		if(type==2){
			num=0;sum=0;
			scanf("%d",&kaochang);
			printf("Case %d: 2 %03d\n",j,kaochang);
			for(int i=0;i<n;i++){
				if(kaochang==a[i].kcid){
					num++;
					sum=sum+a[i].grade;
				}
			}
		if(num==0) printf("NA\n");
		if(num!=0) printf("%d %d\n",num,sum);	
		}
		if(type==3){
			num=0;
			for(int i=0;i<1000;i++){
				hashtable[i].snum=0;
				hashtable[i].kid=i;
			}
			getchar();
			scanf("%s",riqi);
			printf("Case %d: 3 %s\n",j,riqi);
			for(int i=0;i<n;i++){
				if(strncmp(riqi,&a[i].id[4],6)==0){
					hashtable[a[i].kcid].snum++;
					num++;
				}
			}
			if(num==0) printf("NA\n");
			if(num!=0){
              sort(hashtable,hashtable+1000,cmp2);
              for(int i=0;i<1000;i++){
              	if(hashtable[i].snum!=0){
              		printf("%03d %d\n",hashtable[i].kid,hashtable[i].snum);
              	}
              }			
			}	
		}
	}
	return 0;
}
