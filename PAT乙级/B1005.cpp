#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
        return a>b;
}
int main(){
    int k;
    scanf("%d",&k);
    int a[110];
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+k,cmp);
    int n;
    for(int i=0;i<k;i++){
        if(a[i]!=0){
        n=a[i];
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=(3*n+1)/2;
                
            }
            for(int j=0;j<k;j++){
                if(a[j]==n){
                    a[j]=0;
                    
                }
            }
        }
        }
}
    int m=0;
    while(a[m]==0){
        m++;
    }
    printf("%d",a[m]);
    for(int i=m+1;i<k;i++){
        if(a[i]!=0){
            printf(" %d",a[i]);
        }
    }
    return 0;
}
