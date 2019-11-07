#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int address;
	int next;
	int data;
}hashtable[100000];
int main(){
	int begin,n,m;
	scanf("%d %d %d",&begin,&n,&m);
	int Data,Address,Next;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&Address,&Data,&Next);
		hashtable[Address].address=Address;
		hashtable[Address].data=Data;
		hashtable[Address].next=Next;
	}
	int num=0,temp;
	node a[n];
	a[0].address=begin;
	a[0].next=hashtable[begin].next;
	a[0].data=hashtable[begin].data;
	while(a[num].next!=-1){
		num++;
		temp=a[num-1].next;
		a[num].address=temp;
		a[num].next=hashtable[temp].next;
		a[num].data=hashtable[temp].data; 
	}
	num=num+1;
	int p=num/m;int q=num%m;
    for(int k=0;k<p;k++) reverse(a+k*m,a+k*m+m);
	for(int i=0;i<num-1;i++){
		printf("%05d %d %05d\n",a[i].address,a[i].data,a[i+1].address);
	}
	printf("%05d %d -1\n",a[num-1].address,a[num-1].data);
	return 0;
} 
