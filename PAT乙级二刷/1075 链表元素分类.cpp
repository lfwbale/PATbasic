#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int address;
	int val;
	int next;
};
int main(){
	int numa=0,numb=0,numc=0; 
	int begin,n,k;
	scanf("%d %d %d",&begin,&n,&k);
	node s[100000];//初始的 
	node a[100000];//负值 
	node b[100000];//小于等于k 
	node c[100000];//大于k
	int add,data,next_add;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&add,&data,&next_add);
		s[add].address=add;
		s[add].val=data;
		s[add].next=next_add;
	}
	int p=begin;
	while(p!=-1){
		if(s[p].val<0) a[numa++]=s[p];
		else if(s[p].val<=k) b[numb++]=s[p];
		else c[numc++]=s[p];
		p=s[p].next;
	}
    for(int i=numa;i<numa+numb;i++){
    	a[i]=b[i-numa];
    }
    for(int i=numa+numb;i<numa+numb+numc;i++){
    	a[i]=c[i-numa-numb];
    }
    for(int i=0;i<numa+numb+numc;i++){
    	printf("%05d %d ",a[i].address,a[i].val);
    	if(i!=numa+numb+numc-1) printf("%05d\n",a[i+1].address);
    	else printf("-1");
    }
    return 0;
}
