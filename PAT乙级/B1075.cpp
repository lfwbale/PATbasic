#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int add;
	int val;
	int next;
}; 
int main(){
	int first,n,k;
	scanf("%d %d %d",&first,&n,&k);
	node a[100001];
	node ans[n];
	int address,value,nextadd;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&address,&value,&nextadd);
		a[address].val=value;
		a[address].next=nextadd;
		a[address].add=address;
	}
	int p=first,num=0;
	while(p!=-1&&num<n){
		if(a[p].val<0){
			ans[num]=a[p];
			num++;
		}
		p=a[p].next;
	}
	p=first;
	while(p!=-1&&num<n){
		if(a[p].val<=k&&a[p].val>=0){
			ans[num]=a[p];
			num++;
		}
		p=a[p].next;
	}
	p=first;
	while(p!=-1&&num<n){
		if(a[p].val>k){
			ans[num]=a[p];
			num++;
		}
		p=a[p].next;
	}
	for(int i=0;i<num-1;i++){
		ans[i].next=ans[i+1].add;
	}
	ans[num-1].next=-1;
	for(int i=0;i<num-1;i++){
		printf("%05d %d %05d\n",ans[i].add,ans[i].val,ans[i].next);
	}
	printf("%05d %d -1",ans[num-1].add,ans[num-1].val,-1);
	return 0;
}
