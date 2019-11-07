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
	printf("%d",num);
	    return 0;
}
