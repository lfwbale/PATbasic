#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int flag[n]; memset(flag,0,sizeof(flag));
	int max=a[0],min=a[n-1];
	flag[0]=1;flag[n-1]=1;
	for(int i=1;i<n;i++){
       if(a[i]>max){
       	flag[i]++;
       	max=a[i];
       }
	}
    for(int i=n-2;i>=0;i--){
    	if(a[i]<min){
    		flag[i]++;
    		min=a[i];
    	}
    }
    int count=0;
    for(int i=0;i<n;i++){
    	if(flag[i]==2) count++;
    }
    printf("%d\n",count);
    for(int i=0;i<n;i++){
    	if(flag[i]==2){
    		printf("%d",a[i]);
    		count--;
    		if(count!=0) printf(" ");
    	}
    }
    printf("\n");
	return 0;
}
