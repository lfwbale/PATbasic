#include<stdio.h>
#include<algorithm>
using namespace std;
struct mooncake{
	double v;//库存量
	double price;//价格
	double ppu;//单价 
};
bool cmp(mooncake a,mooncake b){
	return a.ppu>b.ppu;
}
int main(){
	int n;double d;
	scanf("%d %lf",&n,&d);
	mooncake cake[n];
	for(int i=0;i<n;i++) scanf("%lf",&cake[i].v);
	for(int i=0;i<n;i++) {
		scanf("%lf",&cake[i].price);
		cake[i].ppu=cake[i].price*1.0/cake[i].v;
	}
	sort(cake,cake+n,cmp);
	double interest=0;
	for(int i=0;i<n;i++){
		if(d>=cake[i].v){
			d=d-cake[i].v;
			interest=interest+cake[i].price;
		}
		else{
			interest=interest+d*cake[i].ppu;
			d=0;
		}
		if(d==0) break;
	}
	printf("%.2f",interest);
	return 0;
} 
