#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char a[n][5];
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	int jiaying=0,jiaping=0,jiafu=0;
	int yiying=0,yiping=0,yifu=0;
	int jiachui=0,jiabu=0,jiajian=0;
	int yichui=0,yibu=0,yijian=0;
	for(int i=0;i<n;i++){
		if(a[i][0]=='B'){
			if(a[i][2]=='B'){
				jiaping++;
				yiping++;
			}
			else if(a[i][2]=='C'){
				jiaying++;yifu++;
				jiabu++;
			}
			else if(a[i][2]=='J'){
				jiafu++;yiying++;
				yijian++;
			}
		}
		else if(a[i][0]=='C'){
			if(a[i][2]=='B'){
				jiafu++;yiying++;
				yibu++;
			}
			else if(a[i][2]=='C'){
				jiaping++;yiping++;
			}
			else if(a[i][2]=='J'){
				jiaying++;yifu++;
				jiachui++;
			}
		}
		else if(a[i][0]=='J'){
			if(a[i][2]=='B'){
				jiaying++;yifu++;
				jiajian++;
			}
			else if(a[i][2]=='C'){
				jiafu++;yiying++;
				yichui++;
			}
			else if(a[i][2]=='J'){
				jiaping++;yiping++;
			}
		}
	}
	printf("%d %d %d\n",jiaying,jiaping,jiafu);
	printf("%d %d %d\n",yiying,yiping,yifu);
	if(jiabu>=jiachui&&jiabu>=jiajian) printf("B");
	else if(jiachui>jiabu&&jiachui>=jiajian) printf("C");
	else printf("J");
	printf(" ");
	if(yibu>=yichui&&yibu>=yijian) printf("B");
	else if(yichui>yibu&&yichui>=yijian) printf("C");
	else printf("J");
	return 0;
}
