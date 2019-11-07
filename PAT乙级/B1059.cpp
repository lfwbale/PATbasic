#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=10000;
struct student{
	int num;//名次
	int sure;//在排名里 
	int flag;//领奖否 
	int what;//领啥奖； 
};
int iss(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	student stu[maxn];
	for(int i=0;i<maxn;i++){
		stu[i].sure=0;
		stu[i].flag=0;
	}
	int n;
	scanf("%d",&n);
	int temp;
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		stu[temp].num=i; 
		stu[temp].sure=1;
		if(i==1) stu[temp].what=2;//2就是特等奖 
		else if(iss(i)==1) stu[temp].what=0;//0就是素数 
		else stu[temp].what=1;//巧克力 
	}
	int k;scanf("%d",&k);
	int a[k];
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	int num;
	for(int i=0;i<k;i++){
		printf("%04d: ",a[i]);
		num=a[i];
		if(stu[num].sure==0) printf("Are you kidding?");
		else if(stu[num].flag==0){
			stu[num].flag=1;
			if(stu[num].what==2) printf("Mystery Award");
			else if(stu[num].what==0) printf("Minion");
			else if(stu[num].what==1) printf("Chocolate");
		}
		else if(stu[num].flag==1){
			printf("Checked");
		}
		if(k!=k-1) printf("\n"); 
	}
	return 0;
}

