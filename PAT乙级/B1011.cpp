#include<stdio.h>
const int maxn=20;
int main(){ //数比较大 准备用long了
    int num;
    scanf("%d",&num);
    long long a[maxn]={0},b[maxn]={0},c[maxn]={0};
    for(int i=0;i<num;i++){
        scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
    }
    for(int i=0;i<num;i++){
        if(a[i]+b[i]>c[i]) printf("Case #%d: true\n",i+1);
        else printf("Case #%d: false\n",i+1);       
    }
    return 0;
}

