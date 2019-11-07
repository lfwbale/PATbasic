#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct student{
	int h;
	char name[10];
};
bool cmp(student a,student b){
	if(a.h!=b.h) return a.h>b.h;
	else return strcmp(a.name,b.name)<0;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	student a[n];
	student b[n];
	int p,maxji;//Ã¿ÅÅÈËÊý 
	for(int i=0;i<n;i++){
		scanf("%s %d",a[i].name,&a[i].h);
	}
	sort(a,a+n,cmp);
	for(int i=1;i<=k;i++){
		if(i==1){
			p=n/k+(n%k);
			if(p%2==0) maxji=p-1;
			else maxji=p-2;
			printf("%s",a[maxji].name);
			for(int j=maxji-2;j>0;j=j-2) printf(" %s",a[j].name);
			for(int j=0;j<p;j=j+2) printf(" %s",a[j].name);
			if(k!=1) printf("\n");		
		}
		else{
			p=n/k;
			if(p%2==0) maxji=p+(n%k)+p*(i-1)-1; 
			else maxji=n/k+(n%k)+p*(i-1)-2;
			printf("%s",a[maxji].name);
			for(int j=maxji-2;i>p+(n%k)+(i-2)*p;j=j-2) printf(" %s",a[j].name);
			for(int j=p+(n%k)+(i-2)*p;j<p+(n%k)+(i-1)*p;j=j+2) printf(" %s",a[j].name);
			if(i!=k) printf("\n");
		}
	}
	return 0;
} 
