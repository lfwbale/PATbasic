#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int jiasay[n],jiahua[n];
	int yisay[n],yihua[n];
	int numjia=0,numyi=0;
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&jiasay[i],&jiahua[i],&yisay[i],&yihua[i]);
		int temp=jiasay[i]+yisay[i];
		if(jiahua[i]==temp&&yihua[i]!=temp) numyi++;
		else if(jiahua[i]!=temp&&yihua[i]==temp) numjia++;
	}
	printf("%d %d",numjia,numyi);
	return 0;
}
