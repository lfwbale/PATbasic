//�Լ�д�� ʧ���� ׼���ο����ϵ� 
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);//n����
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int flag=0;//���flag�����ж��ǲ��ǹ鲢 
	//�жϲ�������
	int temp,count;
	for(int i=1;i<n;i++){
        sort(a,a+i);
		//ÿһ�˽��� �ж�
		count=0;
		while(count<i){
			if(a[count]==b[count])
			count++;
		}
		if(count==i){
			printf("Insertion Sort\n");
            sort(a,a+i+1);
		    printf("%d",a[0]);
		    for(int j=1;j<n;j++){
		    	printf(" %d",a[j]);
		    } 
		    flag=1;
		break;
		} 
	}
	//������������� 
	if(flag=0){
		int temp2;
		printf("Merge Sort\n");
		//��Ϊ��Ҫ�ٵ���һ�֣����Ա�Ϊ�м��� 
		for(int i=1;i<n;i=i*2){
			for(int j=0;j<n;j=j+i){
				sort(a+j,a+j+i);
			}
		temp2=0;
		   while(temp2<n){
			if(a[temp2]==b[temp2]) temp2++;
			else break; 
		    }
		    //������ 
		if(count==n){
		i=i*2;
		if(i>n) i=n;
		for(int j=0;j<n;j=j+i){
			sort(a+j,a+j+i);
		}
		printf("%d",a[0]);
		for(int j=1;j<n;j++){
			printf(" %d",a[i]);
		}
		break;	
		}	 
		} 
	}
	return 0; 
}
