#include<stdio.h>
#include<string.h>
int main(){
	char unit[13][5]={"tret","jan","feb","mar","apr","may",
	"jun","jly","aug","sep","oct","nov","dec"};
	char decade[13][4]={"tam","hel","maa","huh","tou","kes",
	"hei","elo","syy","lok","mer","jou"};
	int n;scanf("%d",&n);
	getchar();
	char a[n][10];
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	for(int i=0;i<n;i++){
		//数字转火星 
		if(a[i][0]>='0'&&a[i][0]<='9'){
			int num=0;
			for(int j=0;j<strlen(a[i]);j++){
				num=num*10+(a[i][j]-'0');
			}
			if(num<=12) printf("%s\n",unit[num]);
			else{
			int ten=num/13;
			int ge=num%13;
			printf("%s",decade[ten-1]);
			if(ge!=0) printf(" %s\n",unit[ge]);
			else printf("\n");	
			}
		}
		//火星转数字 
		else{
			int num=0;
			int flag=0;
			for(int j=0;j<13;j++){
				if(strncmp(decade[j],a[i],3)==0){
					flag=1;
				    num=(j+1)*13;
					break;
				}
			}
			if(flag==1){
				if(strlen(a[i])>4){
					for(int j=1;j<13;j++){
						if(strcmp(&a[i][4],unit[j])==0){
							num=num+j;
							break;
						}
					}
				}
				printf("%d\n",num);
			}
			else{
				for(int j=0;j<13;j++){
					if(strcmp(a[i],unit[j])==0){
						printf("%d\n",j);
						break;
					}
				}
			}
		}
	}
	return 0;
}
