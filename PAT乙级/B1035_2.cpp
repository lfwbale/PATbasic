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
	//�жϲ�������
	int num=1;
	for(int i=0;i<n-1;i++){
		if(b[i]<=b[i+1]) num++;//ע�⣬������b����a 
		else break;
	}
	int isInsert=0; //��0���� ������ 
	for(int i=num;i<n;i++){
		if(a[i]!=b[i]) {
			isInsert=1;
			break;
		}
	}
	if(isInsert==0){
		printf("Insertion Sort\n");
		sort(a,a+num+1);
		printf("%d",a[0]);
		for(int i=1;i<n;i++){
			printf(" %d",a[i]);
		}
	}
	//������ǲ������� ���ǹ鲢���� 
	else{
	printf("Merge Sort\n");
	int d=1,g,flag;//dΪÿ����ٸ� gΪ�ж����� 
	while(d<n){
		g=n/d;
		flag=1;
		for(int i=0;i<g;i++){
			sort(a+i*d,a+(i+1)*d);
		}
		sort(a+g*d,a+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			d=d*2;
			if(d>n) d=n;
			g=n/d;
		for(int i=0;i<g;i++){
			sort(a+i*d,a+(i+1)*d);
		}
		sort(a+g*d,a+n);
		printf("%d",a[0]);
		for(int i=1;i<n;i++){
			printf(" %d",a[i]);
		}
		
		}
		else d=d*2;
		}
	}
	
	 
	return 0;   	
}
