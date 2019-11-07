#include<stdio.h>
int main(){
	int T,k;
	scanf("%d %d",&T,&k);
	int p[k],q[k],b[k],t[k];
	for(int i=0;i<k;i++){
		scanf("%d %d %d %d",&p[i],&b[i],&t[i],&q[i]);
	}
	for(int i=0;i<k;i++){
		if(t[i]>T) 
		{
		printf("Not enough tokens.  Total = %d.\n",T);
		continue;
		} 
		if((p[i]<q[i]&&b[i]==1)||(p[i]>q[i]&&b[i]==0)){
				T=T+t[i];
				printf("Win %d!  Total = %d.\n",t[i],T);
			}
		else {
				T=T-t[i];
				printf("Lose %d.  Total = %d.\n",t[i],T);
				if(T==0){
					printf("Game Over.\n");
					break;
				}
			}
	}
	return 0;
}
