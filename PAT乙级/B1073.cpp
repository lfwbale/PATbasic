//��flag�洢 
/*���ڴ���ѡ��
 1.���Ǵ� ��ѡ
 2.�Ǵ� ûѡ
 */
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct ti{
    int tihao;//��� 
    double fen;//�� 
    int xuan;//ѡ����� 
    int Tnum;// ��ȷѡ���� 
    bool zhengquedaan[127]={0};//��ȷѡ�� 
    int cuowu[127]={0};//�ж���ѧ���� 
}Data[101];
int main(){
    int N,M;//ѧ������
    int hashtable[127]={0}; 
    int issimple=1;
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++){//����
        scanf("%lf",&Data[i].fen);
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
        double fenshu=0;
        for(int k=0;k<M;k++){     
		  memset(hashtable,0,sizeof(hashtable));                              //��
            int num;char c;
            int zhengnum=0;
            int flag=true;
            scanf(" (%d",&num);
            for(int j=0;j<num;j++){                             //��֤��
                scanf(" %c",&c);
                hashtable[c]=1;
                if(Data[k].zhengquedaan[c]==true) zhengnum++;
                else 
				{
					Data[k].cuowu[c]++;
					flag=false;
					issimple=0;
				}
            }
            getchar();                                         //��������
            if(zhengnum==Data[k].Tnum&&flag==true) fenshu=fenshu+Data[k].fen;
            else if(zhengnum!=Data[k].Tnum&&flag==true) {
            	fenshu=fenshu+Data[k].fen*0.5;
            	issimple=0;
            	}
            for(int p='a';p<'g';p++){
            	if(hashtable[p]==0&&Data[k].zhengquedaan[p]==true){
            		Data[k].cuowu[p]++;
            	}
            }
			}
			printf("%.1f\n",fenshu);
        }
    if(issimple==1) printf("Too simple");
	else{
		int max=0;
	for(int i=0;i<M;i++){
		for(int j=97;j<=102;j++){
			if(Data[i].cuowu[j]>max){
				max=Data[i].cuowu[j];
			}
		}
	}g
    	for(int i=0;i<M;i++){
    		for(int j='a';j<='e';j++){
    			if(Data[i].cuowu[j]==max){
    				printf("%d %d-%c\n",max,Data[i].tihao,j);
    			}
    		}
    	}
    }
    return 0;
}
