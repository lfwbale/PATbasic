#include<stdio.h>
#include<algorithm>
using namespace std;
struct student{
	int id;
	int dgrade;
	int cgrade;
};
bool cmp(student a,student b){
	if((a.dgrade+a.cgrade)!=(b.dgrade+b.cgrade)) return (a.dgrade+a.cgrade)>(b.dgrade+b.cgrade);
	else if(a.dgrade!=b.dgrade) return a.dgrade>b.dgrade;
	else return a.id<b.id;
}
int main(){
	int n,l,h;
	scanf("%d %d %d",&n,&l,&h);
	student stu[n];
	int num=0,num1=0,num2=0,num3=0,num4=0;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].id,&stu[i].dgrade,&stu[i].cgrade);
		if(stu[i].dgrade>=l&&stu[i].cgrade>=l) num++;
	}
	printf("%d\n",num);
	student a[num],b[num],c[num],d[num];
    for(int i=0;i<n;i++){
		if(stu[i].dgrade>=l&&stu[i].cgrade>=l){
		if(stu[i].dgrade>=h&&stu[i].cgrade>=h) a[num1++]=stu[i];
		else if(stu[i].dgrade>=h) b[num2++]=stu[i];
		else if(stu[i].dgrade>=stu[i].cgrade) c[num3++]=stu[i];
		else d[num4++]=stu[i];
	    }
    }
	sort(a,a+num1,cmp);
	sort(b,b+num2,cmp);
	sort(c,c+num3,cmp);
	sort(d,d+num4,cmp);
	for(int i=0;i<num1;i++) printf("%d %d %d\n",a[i].id,a[i].dgrade,a[i].cgrade);
	for(int i=0;i<num2;i++) printf("%d %d %d\n",b[i].id,b[i].dgrade,b[i].cgrade);
    for(int i=0;i<num3;i++) printf("%d %d %d\n",c[i].id,c[i].dgrade,c[i].cgrade);
	for(int i=0;i<num4;i++) printf("%d %d %d\n",d[i].id,d[i].dgrade,d[i].cgrade);
	return 0;
}
