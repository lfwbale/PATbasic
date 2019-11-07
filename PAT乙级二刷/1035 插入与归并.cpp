#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int input[n];int a[n];int final[n],b[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&input[i]);
		final[i]=input[i];
		b[i]=input[i];
	}
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(final,final+n);
	int num=1;
	//key:题目测试结果唯一 
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1]) num++;
		else break; 
	}
	sort(b,b+num);
	int flag=1;
	for(int i=num;i<n;i++){
		if(b[i]!=a[i]){
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("Insertion Sort\n");
		sort(a,a+num+1);
		for(int i=0;i<n;i++){
			printf("%d",a[i]);
			if(i!=n-1) printf(" ");
		}
	}
	else{
		printf("Merge Sort\n");
		int d=2,flag1=1;
		while(d<n){
			flag1=0;
			for(int i=0;i+d<=n;i=i+d){
				sort(input+i,input+i+d);
			}
			sort(input+n-n%d,input+n);
			for(int i=0;i<n;i++){
				if(a[i]!=input[i]){
					flag1=1;
					break;
				}
			}
			if(flag1==0){
				d=d*2;
				if(d>n) d=n;
				for(int i=0;i+d<=n;i=i+d) sort(input+i,input+i+d);
				sort(input+n-n%d,input+n);
				for(int i=0;i<n;i++){
					printf("%d",input[i]);
					if(i!=n-1) printf(" ");
				}	
			}
        else d=d*2;
        }
	}
	return 0;
}
