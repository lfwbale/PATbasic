#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct student{
	int h;
	char name[10];
};
bool cmp(student a,student b){
	if(a.h!=b.h) return a.h>b.h;
	else return strcmp(a.name,b.name)<0;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	student a[n];
	student b[n];
	for(int i=0;i<n;i++){
		scanf("%s %d",a[i].name,&a[i].h);
	}
	sort(a,a+n,cmp);
	int p=n-(n/k)*(k-1);int mid;
	int q=n/k;int qmid;
	//×îºóÒ»ÅÅ 
    if(p%2==1){
    	mid=p/2;
    	b[mid]=a[0];
    	for(int i=1;i<=mid;i++){
    		b[mid+i]=a[i*2];
    		b[mid-i]=a[i*2-1];
    	}
    }
    else{
    	mid=p/2;
    	b[mid]=a[0];
    	b[mid-1]=a[1];
    	for(int i=1;i<=mid-1;i++){
    		b[mid+i]=a[i*2];
    		b[mid-1-i]=a[i*2+1];
    	}
    }
    for(int i=p;i<n;i=i+q){
        if(q%2==1){
        	qmid=q/2;
        	b[qmid+i]=a[i];
        	for(int j=1;j<=qmid;j++){
        		b[qmid+i+j]=a[i+j*2];
        		b[qmid+i-j]=a[i+j*2-1];
        	}
        }
        else{
        	qmid=q/2;
        	b[qmid+i]=a[i];
        	b[qmid+i-1]=a[i+1];
        	for(int j=1;j<=qmid-1;j++){
        		b[qmid+i+j]=a[i+j*2];
        		b[qmid+i-j]=a[i+j*2+1];
        	}
        }
    }
    printf("%s",b[0].name);
    for(int i=1;i<p;i++){
    	printf(" %s",b[i].name);
    }
    if(k!=1) printf("\n");
    for(int i=2;i<=k;i++){
    	printf("%s",b[p+(i-2)*q].name);
    	for(int j=1;j<q;j++){
    		printf(" %s",b[p+(i-2)*q+j].name);
    	}
    if(i!=k) printf("\n");
    }
    return 0;
}
