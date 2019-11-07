#include<stdio.h>
#include<algorithm>
using namespace std;
const int num=100010;
struct citizen{
	char name[5];
    int year,month,day;
};
int is(citizen a);
bool cmp(citizen a,citizen b);
int main(){
	int n,count=0;
	scanf("%d",&n);//有多少个数据 
	int max,min;
	citizen p[n];
	char birthday[n][10];
	for(int i=0;i<n;i++){
		scanf("%s %s",p[i].name,birthday[i]);
		p[i].year=1000*(birthday[i][0]-'0')+100*(birthday[i][1]-'0')+10*(birthday[i][2]-'0')+(birthday[i][3]-'0');
		p[i].month=10*(birthday[i][5]-'0')+(birthday[i][6]-'0');
		p[i].day=10*(birthday[i][8]-'0')+(birthday[i][9]-'0');
	}
	for(int i=0;i<n;i++){
		if(is(p[i])){
			count++;
		}
	}
	if(count!=0){
	
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++){
		if(is(p[i])){
			max=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(is(p[i])){
			min=i;
			break;
		}
	}
	printf("%d %s %s",count,p[max].name,p[min].name);
}
else{
	printf("0");
}
	return 0;
	
}
int is(citizen a){
if(a.year>2014||(a.year==2014&&a.month>9)||(a.year==2014&&a.month==9&&a.day>6)||a.year<1814||(a.year==1814&&a.month<9)||(a.year==1814&&a.month==9&&a.day<6))
          {
          return 0;}
		  else{
		  	return 1;
		  } 
           

}
bool cmp(citizen a,citizen b){
	if(a.year!=b.year) return a.year<b.year;
	else if(a.month!=b.month) return a.month<b.month;
	else  return a.day<b.day;

}
