#include<stdio.h>
const int maxn=1000;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    m=m%n;    //考虑m大于n的情况
    int a[maxn];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--){
        a[i+m]=a[i];
    }
    for(int i=m-1;i>=0;i--){
        a[i]=a[n+i];
    }
    printf("%d",a[0]);
    for(int i=1;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}

