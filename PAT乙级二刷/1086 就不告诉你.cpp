#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a*b;
	int num=0;
	int ans[10];
	while(c!=0){
			ans[num]=c%10;
			c=c/10;
			num++;
		}
	int p=0;
	for(int i=0;i<num;i++){
		if(ans[i]!=0){
			p=i;
			break;
		}
	}
	for(int i=p;i<num;i++) {
	printf("%d",ans[i]);
    }
	return 0;
}
