#include<stdio.h>
#include<algorithm>
using namespace std;
struct student{
	int card;  //准考证 
	int de;   //德 
	int ca;   //才 
};
bool cmp(student a,student b){
	if((a.de+a.ca)!=(b.de+b.ca)){
		return (a.de+a.ca)>(b.de+b.ca);
	}
	else if(a.de!=b.de){
		return a.de>b.de;
	}
	else return a.card<b.card;
}
int main(){
	int n,l,h;
	int sum=0,num1=0,num2=0,num3=0,num4=0;//上线人数 
	scanf("%d%d%d",&n,&l,&h);
	student stu[n];
	student stu1[n];//德才兼备 
	student stu2[n];//德分high 
	student stu3[n];//都不到high但德高于才
	student stu4[n];//其他 
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].card,&stu[i].de,&stu[i].ca);
	}
	for(int i=0;i<n;i++){
		if(stu[i].de>=l&&stu[i].ca>=l){
			sum++;
			if(stu[i].de>=h&&stu[i].ca>=h){//德才兼备 
				stu1[num1].card=stu[i].card;
				stu1[num1].de=stu[i].de;
				stu1[num1].ca=stu[i].ca;
				num1++;
			}
			else if(stu[i].de>=h){//有德 
				stu2[num2].card=stu[i].card;
				stu2[num2].de=stu[i].de;
				stu2[num2].ca=stu[i].ca;
				num2++;
			}
			else if(stu[i].de>=stu[i].ca){
				stu3[num3].card=stu[i].card;
				stu3[num3].de=stu[i].de;
				stu3[num3].ca=stu[i].ca;
				num3++;
			}
			else {
				stu4[num4].card=stu[i].card;
				stu4[num4].de=stu[i].de;
				stu4[num4].ca=stu[i].ca;
				num4++;
			}
		}
	}
	sort(stu1,stu1+num1,cmp);
	sort(stu2,stu2+num2,cmp);
	sort(stu3,stu3+num3,cmp);
	sort(stu4,stu4+num4,cmp);
	printf("%d\n",sum);
	for(int i=0;i<num1;i++){
		printf("%d %d %d\n",stu1[i].card,stu1[i].de,stu1[i].ca);
	}
	for(int i=0;i<num2;i++){
		printf("%d %d %d\n",stu2[i].card,stu2[i].de,stu2[i].ca);
	}
	for(int i=0;i<num3;i++){
		printf("%d %d %d\n",stu3[i].card,stu3[i].de,stu3[i].ca);
	}
	for(int i=0;i<num4;i++){
		printf("%d %d %d\n",stu4[i].card,stu4[i].de,stu4[i].ca);
	}
	return 0;
}
 
