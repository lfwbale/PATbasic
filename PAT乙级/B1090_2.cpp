#include<stdio.h>
#include<string.h>
#include<set>
const int maxn=100010;
using namespace std;
int main(){
	set<int> dt[maxn];
	int existed[maxn];
	int n,m;
	int p,q;
	scanf("%d %d",&n,&m);//���� �� ����� 
	for(int i=0;i<n;i++){
		scanf("%d %d",&p,&q);
		dt[p].insert(q);
		dt[q].insert(p);
	}
	for(int i=0;i<m;i++){
		memset(existed,0,sizeof(existed));
		int num;
		scanf("%d",&num);
		int flag=1;
		for(int j=0;j<num;j++){
			int id;
			scanf("%d",&id);
			if(existed[id]==0){
				existed[id]=1;
				for(set<int>::iterator it=dt[id].begin();it!=dt[id].end();it++){
					existed[*it]=1;
				}
			}
			else{
				flag=0;
				//���ﲻ��break��
				//��Ϊ�ᵼ�º�������벻���� 
			} 
		}
		if(flag==1) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

