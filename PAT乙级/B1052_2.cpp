#include<stdio.h>
#include<string.h>
int main(){
	char a[10][5] = { 0 }, b[10][5] = { 0 }, c[10][5] = { 0 };
	int i=0,j=0;
	int flag=0;
	char temp;
	//输入萌表情模块
	temp=getchar();
	while(temp!='\n')
	{
		if(temp=='[')
		{
			flag = 1;
			j=0;
			temp=getchar();
			continue;
		}
		else if(temp==']')
		{
			flag=0;
			a[i][j]='\0';
			i++;
		}
		if(flag==1)
		{
			a[i][j]=temp;
			j++;
		}
		temp=getchar();
	}
	//eye
	i=0;
	temp=getchar();
	while(temp!='\n')
	{
		if (temp == '[')
		{
			flag = 1;
			j = 0;
			temp = getchar();
			continue;
		}
		else if (temp == ']')
		{
			flag = 0;
			b[i][j] = '\0';
			i++;
		}
		if (flag == 1)
		{
			b[i][j] = temp;
			j++;
		}
		temp = getchar();
	}
	i = 0;
	temp = getchar();
	while (temp != '\n')
	{
		if (temp == '[')
		{
			flag = 1;
			j = 0;
			temp = getchar();
			continue;
		}
		else if (temp == ']')
		{
			flag = 0;
			c[i][j] = '\0';
			i++;
		}
		if (flag == 1)
		{
			c[i][j] = temp;
			j++;
		}
		temp = getchar();
	}
 int n;scanf("%d",&n);
 int M[n][5];
 for(int i=0;i<n;i++){
 	for(int j=0;j<5;j++){
 		scanf("%d",&M[i][j]);
 	}
    if(strcmp(a[M[i][0]-1],"")==0 || strcmp(a[M[i][4]-1], "")==0 || strcmp(b[M[i][1]-1] , "")==0 || strcmp(b[M[i][3]-1], "")==0 || strcmp(c[M[i][2]-1],"")==0)
    printf("Are you kidding me? @\\/@\n");
    else{
    	printf("%s(%s%s%s)%s\n", a[M[i][0]-1], b[M[i][1]-1], c[M[i][2]-1], b[M[i][3]-1], a[M[i][4]-1]);
    }
 }
 return 0;
}
