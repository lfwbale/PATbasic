//部分正确 
#include<stdio.h>
#include<algorithm>
using  namespace std; 
const int maxn=100000;
struct node{
	int address;
	int data;
	int next;
}; 
int main(){
	int front,n,k;
	scanf("%d%d%d",&front,&n,&k);
	node a[maxn],b[maxn];
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a[i].address,&a[i].data,&a[i].next);
	}
	int num=0;
	while(front!=-1){
		for(int j=0;j<n;j++){
			if(a[j].address==front){
				b[num].address=a[j].address;
				b[num].data=a[j].data;
				b[num].next=a[j].next;
				front=b[num].next;
				num++;
				break;
			}
		}
	}
//b中保存的就是链表；
int temp=num/k;
    for(int i=0;i<temp;i++){
    	reverse(b+i*k,b+i*k+k);
    }
    for(int i=0;i<num-1;i++){
    	printf("%05d %d %05d\n",b[i].address,b[i].data,b[i+1].address);
    }
    printf("%05d %d -1",b[num-1].address,b[num-1].data);
    return 0;
    
}
