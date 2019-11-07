#include<stdio.h>
int main(){
	int T,K;
	scanf("%d %d",&T,&K);//筹码数 游戏次数
	int n1,b,t,n2;
	for(int i=1;i<=K;i++){
		scanf("%d %d %d %d",&n1,&b,&t,&n2);
		if(t>T) printf("Not enough tokens.  Total = %d.",T);
		else{
			if((n1>n2&&b==0)||(n1<n2&&b==1)){
				T=T+t;
				printf("Win %d!  Total = %d.",t,T);
			}
			else{
				T=T-t;
				printf("Lose %d.  Total = %d.",t,T);
			}
		}
		printf("\n");
		if(T==0){
			printf("Game Over.");
			break;
		}
	} 
	return 0;
}
