//用flag存储 
/*关于错误选项
 1.不是答案 错选
 2.是答案 没选
 */
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct ti{
    int tihao;//题号 
    double fen;//分 
    int xuan;//选项个数 
    int Tnum;// 正确选项数 
    bool zhengquedaan[127]={0};//正确选项 
    int cuowu[127]={0};//有多少学生错 
}Data[101];
int main(){
    int N,M;//学生，题
    int hashtable[127]={0}; 
    int issimple=1;
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++){//题数
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
    for(int i=0;i<N;i++){                                       //人
        double fenshu=0;
        for(int k=0;k<M;k++){     
		  memset(hashtable,0,sizeof(hashtable));                              //题
            int num;char c;
            int zhengnum=0;
            int flag=true;
            scanf(" (%d",&num);
            for(int j=0;j<num;j++){                             //验证答案
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
            getchar();                                         //吸收括号
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
