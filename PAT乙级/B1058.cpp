#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int snum,pnum;//ѧ��������Ŀ��
	scanf("%d %d",&snum,&pnum);
	char a[110][20];//������ 
	getchar();
	for(int i=1;i<=pnum;i++)
	{
		gets(a[i]);
	}
	int count[pnum+1],sum[snum];//ÿ�����ж��ٸ��˴����ܷ� 
	int temp,thcount;//��¼�Ƚϳ��Ⱥ���� 
	memset(count,0,sizeof(count));//��ʼ���ⶼ��0 
	memset(sum,0,sizeof(sum));//�ֶ���0 
	char b[1000][1500];//ѧ���Ĵ� 
	for(int i=0;i<snum;i++){
		gets(b[i]);
	}
	int flag1;
	for(int i=0;i<snum;i++){
		thcount=0;
		for(int j=0;j<strlen(b[i]);j++){
			if(b[i][j]=='('){
				thcount++;
				temp=a[thcount][4]-'0';
				flag1=0;
				for(int k=0;k<2*temp+1;k++){
        if(b[i][j+1+k]!=a[thcount][4+k]) {
        	flag1=1;
        	break;
        }
				}
				
				if(flag1==0)
				sum[i]=sum[i]+a[thcount][0]-'0';
				
				else count[thcount]++;
			}
		}
	}
	for(int i=0;i<snum;i++){
		printf("%d\n",sum[i]);
	}
	int flag=0;int max=0;int sccount=0;
	for(int i=1;i<=pnum;i++){
		if(count[i]!=0){
			flag=1;
			break;
		}
	}
	if(flag==0) printf("Too simple"); 
	else{
		for(int i=1;i<=pnum;i++){
			if(count[i]>max){
				max=count[i];
			}
		}
		for(int i=1;i<=pnum;i++){
			if(count[i]==max){
				if(sccount==0) {
				printf("%d",count[i]);
				sccount=1;
			}
			printf(" %d",i);
			}
		}
	}
	system("pause");
	return 0;
} 
