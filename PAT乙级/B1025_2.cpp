#include <stdio.h>
#include <algorithm>
using namespace std; 
struct node {
	int ad;//address
	int val;//data
	int next;//next
} node1[100000], node2[100000];
 int main() {
	int first,count,k,i,j;
	int n = 0;						//�ڵ������������п�������Ч�ڵ㣬n <= count
	int	m,r;
	node x;
    scanf("%d%d%d", &first, &count, &k);//ͷ�ڵ㣬������������ 
    for (i = 0; i < count; i++) {
        scanf("%d%d%d", &x.ad, &x.val, &x.next);
        node1[x.ad] = x;
    }    
    j=first;
    for (i = 0; j != -1; i++) {       
        node2[i] = node1[j];
        j=node1[j].next;
        n++;						//�ڵ�������Ҫ���¼���
    }							//������
	int temp=n/k;						//ʣ�಻��һ���ڵĽڵ��������������
	for (int i=0; i < temp; i++) {
    reverse(node2+i*k,node2+i*k+k);
	}
    for(int i=0;i<n-1;i++){
    	printf("%05d %d %05d\n",node2[i].ad,node2[i].val,node2[i+1].ad);
    }
    printf("%05d %d -1",node2[n-1].ad,node2[n-1].val);
	return 0;
}

