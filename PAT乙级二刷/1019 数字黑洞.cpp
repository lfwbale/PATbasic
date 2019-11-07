#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;scanf("%d",&n);int k=-1;
	int max,min;
	int a[4];
	while(k!=6174){
		a[0]=n%10;a[1]=(n/10)%10;a[2]=(n/100)%10;a[3]=(n/1000)%10;
		sort(a,a+4);
		max=a[3]*1000+a[2]*100+a[1]*10+a[0];
		min=a[0]*1000+a[1]*100+a[2]*10+a[3];
		k=max-min;
		printf("%04d - %04d = %04d\n",max,min,k);
		if(k==0) break;
		n=k;
	}
	return 0;
}
