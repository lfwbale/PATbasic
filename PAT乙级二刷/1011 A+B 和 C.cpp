#include<stdio.h>
int main(){
	long long a,b,c;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
	}
	return 0;
}
