//挖掘机技术哪家强
#include<stdio.h>
#include<algorithm>
using namespace std;
struct player{
	int num;     //学校编号 
	int grade;   //成绩 
}; 
int main(){
	int n;
	scanf("%d",&n);
	player a[n];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i].num,&a[i].grade);
	}
	int count=1;
	for(int i=0;i<n;i++){
		if(a[i].num>count){
			count=a[i].num;
		}
	}//count即学校个数
	int b[count+1];
	fill(b,b+count+1,0);
	for(int i=0;i<n;i++){
		b[a[i].num]=b[a[i].num]+a[i].grade;
	} 
	int bests=1,bestgrade=0;
	for(int i=1;i<count+1;i++){
		if(b[i]>bestgrade){
			bests=i;
			bestgrade=b[i];
		}
	}
	printf("%d %d",bests,bestgrade);
	return 0;
}
	
