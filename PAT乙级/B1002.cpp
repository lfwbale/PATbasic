#include<stdio.h>
#include<string.h>
int main(){
    char ch[11][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char s[10000];
    gets(s);//�ַ�������
    int len=strlen(s);
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=s[i]-'0'; // ����Ҫע������˳�� x*=y+8�ȼ��� x=x*(y+8);
    }
    //��λ����֮�������
    //����������ת����ƴ��
    int a[1000];
    int q=0;
    while(sum!=0){
        a[q]=sum%10;
        q++;
        sum=sum/10;
    }
    //printf
    for(int j=q-1;j>=0;j--){
        printf("%s",ch[a[j]]);
        if(j!=0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
