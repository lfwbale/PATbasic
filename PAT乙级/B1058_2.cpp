#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct ti{
    int tihao;//题号 
    int fen;//分 
    int xuan;//选项个数 
    int Tnum;// 正确选项数 
    bool zhengquedaan[127]={0};//正确选项 
    int cuo=0;//有多少学生错 
}Data[101];
bool cmp(ti A,ti B){
    if(A.cuo!=B.cuo) return A.cuo>B.cuo;
    else return A.tihao<B.tihao;
}
int main(){
    int N,M;//学生，题
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++){//题数
        scanf("%d",&Data[i].fen);
        scanf("%d",&Data[i].xuan);
        scanf("%d",&Data[i].Tnum);
        for(int j=0;j<Data[i].Tnum;j++){
            char c;
            scanf(" %c",&c);
            int a=c;
            Data[i].zhengquedaan[a]=true;
        }
        Data[i].tihao=i+1;
    }
    for(int i=0;i<N;i++){                                       //人
        int fenshu=0;
        for(int k=0;k<M;k++){                                   //题
            int num;char c;
            int zhengnum=0;
            int flag=true;
            scanf(" (%d",&num);
            for(int j=0;j<num;j++){                             //验证答案
                scanf(" %c",&c);
                if(Data[k].zhengquedaan[c]) zhengnum++;
                else flag=false;
            }
            getchar();                                          //吸收括号
            if(zhengnum==Data[k].Tnum&&flag) fenshu+=Data[k].fen;
            else Data[k].cuo++;
        }
        printf("%d\n",fenshu);
    }
    sort(Data,Data+M,cmp);
    if(Data[0].cuo==0){
        printf("Too simple");
        return 0;
    }
    printf("%d",Data[0].cuo);
    for(int i=0;i<M;i++){
        if(Data[i].cuo!=Data[0].cuo) break;
        printf(" %d",Data[i].tihao);
    }
    return 0;
}

