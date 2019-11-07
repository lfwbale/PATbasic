#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
	int code;
	int mid;
	int final;
	int total;
	char name[22];
};
bool cmp(student a,student b){
	if(a.total!=b.total) return a.total>b.total;
	else return strcmp(a.name,b.name)<0;
}
bool cmp2(student a,student b){
	if(a.code!=b.code) return a.code>b.code;
	else return strcmp(a.name,b.name)<0;
}
int main(){
	student a[30000];double tempt;
	for(int i=0;i<30000;i++){
		a[i].code=-1;
		a[i].mid=-1;
		a[i].final=1;
		a[i].total=-1;
	}
	int p,m,n;
	scanf("%d %d %d",&p,&m,&n);
	for(int i=0;i<p;i++) {
	scanf("%s %d",a[i].name,&a[i].code);
    }
    sort(a,a+p,cmp2);
    int num=0;
    for(int i=0;i<p;i++){
    	if(a[i].code>=200) num++;
    	else break;
    }
	for(int i=num;i<m+num;i++){
		scanf("%s %d",a[i].name,&a[i].mid);
		for(int j=0;j<num;j++){
				if(strcmp(a[i].name,a[j].name)==0){
					a[j].mid=a[i].mid;
					break;
			    }
		    }
		}
	for(int i=num+m;i<num+m+n;i++){
		scanf("%s %d",a[i].name,&a[i].final);
		for(int j=0;j<num;j++){
				if(strcmp(a[i].name,a[j].name)==0){
					a[j].final=a[i].final;
					break;
				}
			}
		}
	for(int i=0;i<num;i++){
			if(a[i].mid>a[i].final){
				tempt=a[i].mid*0.4+a[i].final*0.6;
			}
			else tempt=a[i].final;
			if(tempt-(int)tempt<0.5) a[i].total=(int)tempt;
			else a[i].total=(int)tempt+1;
	}
	sort(a,a+num,cmp);
	for(int i=0;i<num;i++){
		if(a[i].total>=60){
			printf("%s %d %d %d %d\n",a[i].name,a[i].code,a[i].mid,a[i].final,a[i].total);
		}
	}
	return 0; 
}
