//��map
#include<stdio.h>
#include<iostream>
#include<string> 
#include<map>
#include<algorithm>
using namespace std;
struct stu{
    string fuck;
    int gp = -1, gm = -1, gf = -1, G = 0;
    //gp��̳ɼ� gm���гɼ� gf��ĩ�ɼ� g�ܷ� 
};
int num=0;
bool cmp(stu a,stu b){
    if(a.G!=b.G) return a.G>b.G;
    else return a.fuck<b.fuck;
}
int main(){
	int p,m,n;
	scanf("%d %d %d",&p,&m,&n);//�����ҵ ���п��� ��ĩ���� 
	map<string,int>mp;
	stu a[10000]; 
	int num=0;
	for (int i=0; i<p; i++) {//���߱��
        string id; int score;
        cin >> id >> score;
        //mp.count()ͳ�Ƴ��ִ��� 
        if(score>=200){//���ѧ����һ�γ���
            mp[id]=num;//���˼·һ��Ҫ�� ��mp��int��Ӧstudent���±� 
            a[mp[id]].fuck=id;
			num++;//id��Ӣ���� 
        }
        a[mp[id]].gp=score;
    }
    
    for (int i = 0; i<m; i++) {//����
        string id; int score;
        cin >> id >> score;
        if(mp.find(id)!=mp.end()){//���ѧ���б�̳ɼ� 
        a[mp[id]].gm=score;
        }
    }
    
    for (int i = 0; i<n; i++) {//��ĩ
        string id; int score;
        cin >> id >> score;
        if(mp.find(id)!=mp.end()){//���ѧ����һ�γ���
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
