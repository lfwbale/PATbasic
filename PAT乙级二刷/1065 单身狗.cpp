//��Ϊ�����ǰ�����˳���������ô����set 
#include<stdio.h>
#include<set>
using namespace std;
int main(){
	int hashtable[100000]={-1};
	int n;scanf("%d",&n);
	int f,m,num;
	for(int i=0;i<n;i++){
		scanf("%d %d",&f,&m);
		hashtable[f]=m;
		hashtable[m]=f;
	}
	scanf("%d",&n);//�˿�����
	set<int> st;
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		st.insert(num);
	}
	int count=0;
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		int p=hashtable[*it];
		if(st.find(p)!=st.end()){
			st.erase(*it);
			st.erase(st.find(p));
			continue;
		}
	}
	printf("%d\n",st.size());
	if(st.size()!=0){
		int count=st.size();
		for(set<int>::iterator it=st.begin();it!=st.end();it++){
			printf("%05d",*it);
			count--;
			if(count!=0) printf(" ");  
		}
	} 
	return 0;
}
