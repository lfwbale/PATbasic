#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
struct studentInfo{
    char name[20];
    char id[20];
    int grade;
};
bool cmp(studentInfo a,studentInfo b){
    return a.grade<b.grade;
}
int main(){
    int n;
    scanf("%d",&n);//学生人数
    studentInfo stu[1000];//不一定需要stu[n]
    for(int i=0;i<n;i++){
        scanf("%s %s %d",stu[i].name,stu[i].id,&stu[i].grade);
    }
    int max,min;
    int amax=0;int bmin=100;
    for(int j=0;j<n;j++){
        if(stu[j].grade<bmin){
            bmin=stu[j].grade;
            min=j;
        }
        if(stu[j].grade>amax){
            amax=stu[j].grade;
            max=j;
        }
    }
    printf("%s %s\n",stu[max].name,stu[max].id);
    printf("%s %s\n",stu[min].name,stu[min].id);
    return 0;
}
