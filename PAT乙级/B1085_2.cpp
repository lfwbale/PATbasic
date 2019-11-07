//map系列 
#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
struct university{
	double sum=0;
	int count=0;
	string name;//不使用char数组了 
}; 
bool cmp(university a,university b){
	if((int)a.sum!=(int)b.sum) return a.sum>b.sum;
	else if(a.count!=b.count) return a.count<b.count;
	else return a.name<b.name; //不需要strcmp了 
}
int main(){
	int n;scanf("%d",&n);
	university a[n];
	int num=0;//学校数
	map<string,int>mp;
	for(int i=0;i<n;i++){
		string id,school;
		double score;
		cin>>id;
		scanf("%lf",&score);
		cin>>school;
		for(int j=0;j<school.length();j++){
			if(school[j]>='A'&&school[j]<='Z')
			school[j]=school[j]-'A'+'a';//名字统一小写  school[j]=tolower(school[j]);
		}
		if(id[0]=='B') score=score*2.0/3;          //计算当前学生可以给学校带来多少分
        if(id[0]=='T') score=score*3.0/2;
        if(mp.find(school)==mp.end()){
        	mp[school]=num;
        	a[mp[school]].name=school;
        	num++;
        } 
        a[mp[school]].sum+=score;
        a[mp[school]].count++;
    } 
    sort(a,a+num,cmp);
    printf("%d\n1 ",num);
	cout<<a[0].name;
    printf(" %d %d",(int)a[0].sum,a[0].count);
	int k=1;int temp=1;
    for(int k=1;k<num;k++){
    	if((int)a[k].sum==(int)a[k-1].sum) printf("\n%d ",temp);
    	else {
    		printf("\n%d ",k+1);
    		temp=k+1;
    	}
    	cout<<a[k].name;
    	printf(" %d %d",(int)a[k].sum,a[k].count);
    }
	return 0;	
} 

