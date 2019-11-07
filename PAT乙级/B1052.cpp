#include<stdio.h>
#include<string.h>
int main(){
	int handnum=0,eyenum=0,mousenum=0;
	char hand[150];char eye[150];char mouse[150];
    gets(hand); gets(eye); gets(mouse);
    for(int i=0;i<strlen(hand);i++){
    	if(hand[i]=='[') handnum++;
    }
    for(int i=0;i<strlen(eye);i++){
    	if(eye[i]=='[') eyenum++;
    }
    for(int i=0;i<strlen(mouse);i++){
    	if(mouse[i]=='[') mousenum++;
    }
	int n;
	scanf("%d",&n);
	int a[n][5];
	int naone[n];
	memset(naone,0,sizeof(naone));
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
		if(a[i][0]>handnum||a[i][1]>eyenum||a[i][2]>mousenum||a[i][3]>eyenum||a[i][4]>handnum){
			naone[i]=1;
		}
		if(a[i][0]<1||a[i][1]<1||a[i][2]<1||a[i][3]<1||a[i][4]<1){
			naone[i]=1;
		}
	}
	//µ÷ÊÔ 
	printf("%d %d %d\n",handnum,eyenum,mousenum);
	
	for(int i=0;i<n;i++){
    if(naone[i]==1) printf("Are you kidding me? @\\/@");
    else{
    	int count,temp;
    	//×óÊÖ 
    	count=0;
    	for(int j=0;j<strlen(hand);j++)
    	{
    		if(hand[j]=='[') count++;
    		if(count==a[i][0]){
    			temp=j;
    			break;
    		}
        }
		for(int j=temp+1;hand[j]!=']';j++){
			printf("%c",hand[j]);
		}
		printf("(");
		//×óÑÛ 
		count=0;
    	for(int j=0;j<strlen(eye);j++)
    	{
    		if(eye[j]=='[') count++;
    		if(count==a[i][1]){
    			temp=j;
    			break;
    		}
        }
		for(int j=temp+1;eye[j]!=']';j++){
			printf("%c",eye[j]);
		}
		//×ì°Í
		count=0;
    	for(int j=0;j<strlen(mouse);j++)
    	{
    		if(mouse[j]=='[') count++;
    		if(count==a[i][2]){
    			temp=j;
    			break;
    		}
        }
		for(int j=temp+1;mouse[j]!=']';j++){
			printf("%c",mouse[j]);
		}
		//ÓÒÑÛ	
		count=0;
    	for(int j=0;j<strlen(eye);j++)
    	{
    		if(eye[j]=='[') count++;
    		if(count==a[i][3]){
    			temp=j;
    			break;
    		}
        }
		for(int j=temp+1;eye[j]!=']';j++){
			printf("%c",eye[j]);
		}
		printf(")");
		//ÓÒÊÖ
		count=0;
    	for(int j=0;j<strlen(hand);j++)
    	{
    		if(hand[j]=='[') count++;
    		if(count==a[i][4]){
    			temp=j;
    			break;
    		}
        }
		for(int j=temp+1;hand[j]!=']';j++){
			printf("%c",hand[j]);
		}
	}
	printf("\n");
	}
	return 0;
}
