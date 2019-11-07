#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int a1[n],a2[n],a3[n],a4[n],a5[n];
	int num1=0,num2=0,num3=0,num4=0,num5=0;
	for(int i=0;i<n;i++){
		if(a[i]%10==0) a1[num1++]=a[i];
		if(a[i]%5==1) a2[num2++]=a[i];
		if(a[i]%5==2) a3[num3++]=a[i];
		if(a[i]%5==3) a4[num4++]=a[i];
		if(a[i]%5==4) a5[num5++]=a[i];
	}
	if(num1==0) printf("N");
	else{
		int sum1=0;
		for(int i=0;i<num1;i++){
			sum1=sum1+a1[i];
		} 
		printf("%d",sum1);
	}
	printf(" ");
	if(num2==0) printf("N");
	else{
		int sum2=0;
		int flag=1;
		for(int i=0;i<num2;i++){
			sum2=sum2+a2[i]*flag;
			flag=-flag;
		}
		printf("%d",sum2);
	}
	printf(" ");
	if(num3==0) printf("N");
	else printf("%d",num3);
	printf(" ");
	if(num4==0) printf("N");
	else {
		double sum4=0,ans4;
		for(int i=0;i<num4;i++){
			sum4=sum4+a4[i];
		}
		ans4=sum4*1.0/num4;
		printf("%.1f",ans4);
	}
	printf(" ");
	if(num5==0) printf("N");
	else{
		sort(a5,a5+num5);
		printf("%d",a5[num5-1]);
	} 
	return 0;
}

