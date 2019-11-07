#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
const int maxn=100010;
int hashtable[maxn];
int main(){
    int n;
    scanf("%d",&n);
    fill(hashtable,hashtable+n,0);
    //ÇóËØÊı
    for(int i=2;i<=n;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                hashtable[i]=1;
                break;
            }
        }
    }
    int count=0;
    for(int i=5;i<=n;i++){
        if(hashtable[i]==0&&hashtable[i-2]==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

