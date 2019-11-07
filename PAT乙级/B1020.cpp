#include<stdio.h>
#include<algorithm>
using namespace std;
struct mooncake{
	double t;//库存量
	double price;//总售价 
	double sale;//单价 
};
bool cmp(mooncake a,mooncake b){
	return a.sale>b.sale;
}
int main(){
	int n;
	double d;
	scanf("%d%lf",&n,&d);
	mooncake cake[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].t);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].price);
		cake[i].sale=cake[i].price/cake[i].t;
	}
	sort(cake,cake+n,cmp);
	double sum=0;
	int count=0;
	while(d>=0&&count<=n){
		if(cake[count].t<d){
			d=d-cake[count].t;
			sum=sum+cake[count].price;
			count++;
		}
		else{
			sum=sum+cake[count].sale*d;
			break;
		}
	}
	printf("%.2f",sum);
	return 0;
}
