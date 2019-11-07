#include<string.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm> 
#include<iostream>
using namespace std;
struct university{
	string name;//学校名 
	double sum=0;//总分 
	int count=0;//学生数 
};
bool cmp(university a,university b){
	if((int)a.sum!=(int)b.sum) return a.sum>b.sum;
	else if(a.count!=b.count) return a.count<b.count;
	else return a.name<b.name; //不需要strcmp了 
}
int main(){
    int n;scanf("%d",&n);
    map<string,int>mp;
	university s[n];
    int num=0;//用来锁定university的技巧 ,你忘记初始化num了 
    for(int i=0;i<n;i++){
    	string id,school;
    	double grade;
    	cin>>id;
		scanf("%lf",&grade);
		cin>>school;
    	//cout<<school<<" ";
		if(id[0]=='T') grade=grade*1.5;
		else if(id[0]=='B') grade=grade/1.5;
		for(int j=0;j<school.length();j++){
			if(school[j]>='A'&&school[j]<='Z')
			school[j]=school[j]-'A'+'a';
		} 
		//cout<<school<<endl;
        if(mp.find(school)==mp.end()){
        	mp[school]=num;
        	s[mp[school]].name=school;
        	num++;
        } 
        s[mp[school]].sum+=grade;
        s[mp[school]].count++;
  
    } 
	sort(s,s+num,cmp);
	printf("%d\n",num); 
	int k=1;
	for(int i=0;i<num;i++){
		printf("%d ",k);
		cout<<s[i].name<<" "<<(int)s[i].sum<<" "<<s[i].count<<endl;
		if(i!=num-1){
			if((int)s[i].sum!=(int)s[i+1].sum) k=i+2;
		}
	} 
	    return 0;
}
