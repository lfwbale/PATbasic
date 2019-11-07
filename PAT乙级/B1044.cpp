#include<stdio.h>
#include<string.h>
int main(){
	char unit[13][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char tens[13][4]={"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	int n;
	scanf("%d",&n);
	getchar();//scanf与gets连用，要使用一个getchar把回车干掉 
	char a[n][9];
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum=0;
		//看第一位如果是数字 
		if(a[i][0]>='0'&&a[i][0]<='9'){
			//求数字值
			for(int j=0;j<strlen(a[i]);j++){
				sum=sum*10+a[i][j]-'0';
			}
			//分类输出
			if(sum<13) printf("%s",unit[sum]);
			else if(sum>=13&&sum%13!=0) printf("%s %s",tens[sum/13],unit[sum%13]);
			else printf("%s",tens[sum/13]);
		}
		//是火星文转数字 
		else{
			if(strlen(a[i])<=4){
				for(int j=0;j<13;j++){
				if(strcmp(a[i],unit[j])==0){
				printf("%d",j);
				break;
			    }
			    else if(strcmp(a[i],tens[j])==0){
			    	printf("%d",j*13);
			    	break;
			    }
				}
			}
			else{
			for(int j=0;j<13;j++)
        {
          if(strncmp(a[i],tens[j],3)==0)//比较前3位，即高位
          {
            sum=sum+13*j;
          }
          if(strcmp(&a[i][4],unit[j])==0)//yaohui
          {
            sum+=j;
          }
        }
        printf("%d",sum);
			} 
		}
		printf("\n");
	}
	return 0;
	
}
