#include<stdio.h>
const int maxn=10000;
int main(){
    int equ[maxn];
    int num=0;
    while(scanf("%d",&equ[num])!=EOF){  //�Ѷ���ʽ��ϵ����ָ��ȫ����������
        num++;
    }
    //�����0����ʽ
    if(num==2&&equ[1]==0){
        printf("0 0");
    }
    else{
    int count=num/2;//һ��ϵ����Ӧһ��ָ��
        int a[count],b[count];//a��ϵ�� b��ָ����
        for(int i=0;i<count;i++){
            a[i]=equ[i*2];
            b[i]=equ[i*2+1];
        }
        for(int i=0;i<num;i++){
            if(i%2==0){//��ϵ��
                equ[i]=a[i/2]*b[i/2];
            }
            else{
                equ[i]=b[i/2]-1;//
            }
        
        }
        //ϵ��Ϊ0�����
                printf("%d %d",equ[0],equ[1]);//��һ��Ҫ�������
       
        for(int j=2;j<num;j++){
            if(j%2==0&&equ[j+1]!=-1){
                printf(" %d %d",equ[j],equ[j+1]);
            }
        }
}
    return 0;
}

