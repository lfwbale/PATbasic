#include <stdio.h>
int main(){
	int n;
	int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	scanf("%d",&n);//n<=100;身份证号个数 
	char a[n][18];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);//输入每一个身份证号 
	} 
	int count=0; bool temp;char z;
	//判断是否有输出 
	for(int i=0;i<n;i++){
		int sum=0;
		temp=true;
		for(int j=0;j<17;j++){
		if(a[i][j]>='0'&&a[i][j]<='9')
		{
			sum=sum+(a[i][j]-'0')*b[j];
		}
		else {
			temp=false;
			break;
		}
	}
	if(temp==false){
		for(int k=0;k<18;k++){
		printf("%c",a[i][k]);
	}
	printf("\n");
		count++;
	}
	else{
	switch(sum%11){
		case 0: z='1';break; 
		case 1: z='0';break;
		case 2: z='X';break;
		case 3: z='9';break;
		case 4: z='8';break;
		case 5: z='7';break; 
		case 6: z='6';break;
		case 7: z='5';break;
		case 8: z='4';break;
		case 9: z='3';break;
		case 10: z='2';break;
	}
	if(z!=a[i][17]){
		for(int k=0;k<18;k++){
		printf("%c",a[i][k]);
	}
	printf("\n");
		count++;
	}
  }
}
//判断是否合理，不合理就输出 
	if(count==0){
		printf("All passed");
	}
	return 0;
}
