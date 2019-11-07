#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
struct student{
	string name;
	int online;
	double final=-1;
	double midterm=-1;
	double sum;
}a[10000];
bool cmp(student a,student b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	else return a.name<b.name;
}
int main(){
	int p,m,n;
	scanf("%d %d %d",&p,&m,&n);
	map<string,int> mp;
	string id;double grade;
	int num=0;
	for(int i=0;i<p;i++){
		cin>>id>>grade;
		if(grade>=200){
			mp[id]=num;
			a[num].name=id;
			a[num].online=grade;
			num++;
		}
	}
	for(int i=0;i<m;i++){
		cin>>id>>grade;
		if(mp.find(id)!=mp.end()){
			a[mp[id]].midterm=grade;
		}
	}
	for(int i=0;i<n;i++){
		cin>>id>>grade;
		if(mp.find(id)!=mp.end()){
			a[mp[id]].final=grade;
		}
	}
	for(int i=0;i<num;i++){
		if(a[i].midterm<=a[i].final) a[i].sum=a[i].final;
		else{
			a[i].sum=a[i].final*0.6+a[i].midterm*0.4;
			if(a[i].sum-(int)a[i].sum<0.5) a[i].sum=(int)a[i].sum;
			else a[i].sum=(int)a[i].sum+1;
		}
	}
	sort(a,a+num,cmp);
	for(int i=0;i<num;i++){
		if(a[i].sum>=60){
			cout<<a[i].name;
			printf(" %d %.0f %.0f %.0f\n",a[i].online,a[i].midterm,a[i].final,a[i].sum);
		}
		else break;
	}
	return 0;
	
}
