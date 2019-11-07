#include<stdio.h>
#include<math.h>
int main(){
	int m,x,y;
	scanf("%d %d %d",&m,&x,&y);
	double bingx,bingy;
	int flag=0;
	for(int i=9;i>=1;i--){
		for(int j=9;j>=0;j--){
			int jia=i*10+j;
			int yi=j*10+i;
			bingx=fabs(jia-yi)*1.0/x;
			bingy=yi*1.0/y;
			if(bingx==bingy){
				flag=1;
				printf("%d ",jia);
				//¼× 
				if(jia>m) printf("Cong");
				else if(jia==m) printf("Ping");
				else if(jia<m) printf("Gai");
				
				printf(" ");
				//ÒÒ
				if(yi>m) printf("Cong");
				else if(yi==m) printf("Ping");
				else if(yi<m) printf("Gai");
				
				printf(" ");
				
				//±û
				if(bingx>m) printf("Cong");
				else if(bingx==m) printf("Ping");
				else if(bingx<m) printf("Gai");				 
				
				break;
			}
		}
		if(flag==1) break;
	}
	if(flag==0) printf("No Solution");
	return 0;
}
