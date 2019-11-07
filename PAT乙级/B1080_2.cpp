//用map
#include<stdio.h>
#include<iostream>
#include<string> 
#include<map>
#include<algorithm>
using namespace std;
struct stu{
    string fuck;
    int gp = -1, gm = -1, gf = -1, G = 0;
    //gp编程成绩 gm期中成绩 gf期末成绩 g总分 
};
int num=0;
bool cmp(stu a,stu b){
    if(a.G!=b.G) return a.G>b.G;
    else return a.fuck<b.fuck;
}
int main(){
	int p,m,n;
	scanf("%d %d %d",&p,&m,&n);//编程作业 期中考试 期末考试 
	map<string,int>mp;
	stu a[10000]; 
	int num=0;
	for (int i=0; i<p; i++) {//在线编程
        string id; int score;
        cin >> id >> score;
        //mp.count()统计出现次数 
        if(score>=200){//如果学生第一次出现
            mp[id]=num;//这个思路一定要会 用mp的int对应student的下标 
            a[mp[id]].fuck=id;
			num++;//id即英文名 
        }
        a[mp[id]].gp=score;
    }
    
    for (int i = 0; i<m; i++) {//期中
        string id; int score;
        cin >> id >> score;
        if(mp.find(id)!=mp.end()){//如果学生有编程成绩 
        a[mp[id]].gm=score;
        }
    }
    
    for (int i = 0; i<n; i++) {//期末
        string id; int score;
        cin >> id >> score;
        if(mp.find(id)!=mp.end()){//如果学生第一次出现
            a[mp[id]].gf=score;
        }
    }
    
    for(int i=0;i<num;i++){
        if(a[i].gm>a[i].gf)
            a[i].G=(int)(a[i].gm*0.4+a[i].gf*0.6+0.5);
        else
            a[i].G=a[i].gf;
    }
    
     sort(a,a+num,cmp);
     
    for(int i=0;i<num;i++){
        if(a[i].G>=60){
            cout<<a[i].fuck;
            printf(" %d %d %d %d\n",a[i].gp,a[i].gm,a[i].gf,a[i].G);
        }
    }
    return 0;
    
} 
