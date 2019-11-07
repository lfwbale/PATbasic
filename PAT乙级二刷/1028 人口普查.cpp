#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int year,month,day;
	int max=20140907,min=18140905;
	char p[n][7];
	int count=0,old,young;
	for(int i=0;i<n;i++){
		scanf("%s %d/%d/%d",p[i],&year,&month,&day);
		if(year>2014||year<1814) continue;
		if(month>12) continue;
		int temp=year*10000+month*100+day;
		if(temp>=18140906&&temp<20140907){
			count++;
			if(temp<max){
				max=temp;
				old=i;
			}
			if(temp>min){
				min=temp;
				young=i;
			}
		}
	}
	if(count!=0) printf("%d %s %s",count,p[old],p[young]);
	else printf("0");
	return 0;
}
