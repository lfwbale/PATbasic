#include<stdio.h>
int main(){
	int N,M;
	scanf("%d %d",&N,&M);//ѧ���� ��Ʒ��
	int temp;
	int hashtable[10000]={0};
	for(int i=0;i<M;i++){
		scanf("%d",&temp);
		hashtable[temp]=1; 
	} 
	char a[N][5];
	int n;//ÿ��ѧ��Υ��Ʒ�� 
	int scount=0,tcount=0;
	for(int i=0;i<N;i++){
		scanf("%s %d",a[i],&n);
		int flag1=0,flag2=0;//1��¼�Ƿ���Ҫ������� 2��¼�Ƿ���Ҫ��� 
		for(int j=0;j<n;j++){
			scanf("%d",&temp);
			if(hashtable[temp]==1){
				flag2=1;
				tcount++;
				if(flag1==0){
					printf("%s:",a[i]);
					scount++;
					flag1=1;
				}
				printf(" %04d",temp);	
			} 
		}
		if(flag2==1) printf("\n");
	}
	printf("%d %d",scount,tcount);
	return 0;
}
