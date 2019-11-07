#include<stdio.h>
#include<string.h>
int main(){
    char ch[11][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char s[10000];
    gets(s);//字符串数组
    int len=strlen(s);
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=s[i]-'0'; // 这里要注意运算顺序 x*=y+8等价于 x=x*(y+8);
    }
    //各位数字之和已求得
    //下面把这个数转换成拼音
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
