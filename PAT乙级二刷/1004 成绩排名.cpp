#include<stdio.h>
#include<algorithm>
using namespace std;
struct studentInfo{
	char name[12];
	char id[12];
	int grade;
}; 
bool cmp(studentInfo a,studentInfo b){
	return a.grade<b.grade;
}
int main(){
	int n;
	scanf("%d",&n);
	studentInfo a[n];
	for(int i=0;i<n;i++){
		scanf("%s %s %d",a[i].name,a[i].id,&a[i].grade);
	}
	sort(a,a+n,cmp);
	printf("%s %s\n",a[n-1].name,a[n-1].id);
	printf("%s %s",a[0].name,a[0].id);
	return 0;
	
}
