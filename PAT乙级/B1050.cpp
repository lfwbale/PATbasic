#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	int row,line;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			line=i;
		}
	}
	row=n/line;
	int p=row;
    int q=line;
	int k=0,r=0,l=0;
	int b[p][q];
	while(k<n){//循环体line和row别弄错 
	if(line!=1){
		for(int i=0;i<line-1;i++)	b[r][l++]=a[k++];
		for(int j=0;j<row-1;j++)    b[r++][l]=a[k++];
		for(int i=0;i<line-1;i++)   b[r][l--]=a[k++];
		for(int i=0;i<row-1;i++)	b[r--][l]=a[k++];
		}
	else{
		for(int i=0;i<row;i++) b[r++][l]=a[k++];
	}
		row=row-2;
		line=line-2;
		r++;
		l++;
		
	}
	for(int i=0;i<p;i++){
		printf("%d",b[i][0]);
		for(int j=1;j<q;j++){
			printf(" %d",b[i][j]);
		}
		if(i!=p-1)
		printf("\n");
	}
	return 0;
}
