#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
	int N;scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+N,cmp);
	//for(int i=0;i<N;i++) printf("%d ",a[i]);
	//printf("\n");
	int m,n;
	for(int i=1;i*i<=N;i++){
		if(N%i==0) n=i;
	}
	m=N/n;	
	int b[m][n];
	int line=n,row=m;int k=0,p=0,q=0;
	while(k<N){
		if(line!=1){
		for(int i=0;i<line-1;i++) b[p][q++]=a[k++];
		for(int i=0;i<row-1;i++)  b[p++][q]=a[k++];
		for(int i=0;i<line-1;i++) b[p][q--]=a[k++];
		for(int i=0;i<row-1;i++)  b[p--][q]=a[k++];
	    }
	    else{
	    	for(int i=0;i<row;i++) b[p++][q]=a[k++];
	    }
		line=line-2;
		row=row-2;
		p=p+1;
		q=q+1;
		
	}
	//printf("\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",b[i][j]);
			if(j!=n-1) printf(" ");
		}
		if(i!=m-1) printf("\n");
	}
}
