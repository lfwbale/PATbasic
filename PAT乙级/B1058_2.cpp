#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct ti{
    int tihao;//��� 
    int fen;//�� 
    int xuan;//ѡ����� 
    int Tnum;// ��ȷѡ���� 
    bool zhengquedaan[127]={0};//��ȷѡ�� 
    int cuo=0;//�ж���ѧ���� 
}Data[101];
bool cmp(ti A,ti B){
    if(A.cuo!=B.cuo) return A.cuo>B.cuo;
    else return A.tihao<B.tihao;
}
int main(){
    int N,M;//ѧ������
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++){//����
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
    for(int i=0;i<N;i++){                                       //��
        int fenshu=0;
        for(int k=0;k<M;k++){                                   //��
            int num;char c;
            int zhengnum=0;
            int flag=true;
            scanf(" (%d",&num);
            for(int j=0;j<num;j++){                             //��֤��
                scanf(" %c",&c);
                if(Data[k].zhengquedaan[c]) zhengnum++;
                else flag=false;
            }
            getchar();                                          //��������
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

