#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,cmp);//从大到小排列 
    int temp;
    for(int i=0;i<n;i++){
    	if(a[i]!=0){
        temp=a[i];
        while(temp!=1){
            if(temp%2==0){
                temp=temp/2;
            }
            else{
                temp=(3*temp+1)/2;
                
            }
            for(int j=0;j<n;j++){
                if(a[j]==temp){
                    a[j]=0; 
					break;      
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
    for(int i=m+1;i<n;i++){
        if(a[i]!=0){
            printf(" %d",a[i]);
        }
    }
    return 0;
}
