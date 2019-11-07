#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b) //求最大公约数 
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
struct Fraction{
	ll up,down;
};
Fraction reduction(Fraction result){//分子不为0 化简 
    if(result.down<0){
    	result.down=-result.down;
    	result.up=-result.up;
    }
	if (result.up==0) result.down=1;
	else{
		int d=gcd(abs(result.up),abs(result.down));
		result.up=result.up/d;
		result.down=result.down/d;
	}
	return result;
}
//分数的输出
void showResult(Fraction r){
	r=reduction(r);
	if(r.up<0) printf("(");
	if(r.down==1) printf("%lld",r.up);
	else if(abs(r.up)>abs(r.down)){
		printf("%lld %lld/%lld",r.up/r.down,abs(r.up)%r.down,r.down);
	}
	else{
		printf("%lld/%lld",r.up,r.down);
	}
	if(r.up<0) printf(")");
}
//分数加法
Fraction add(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.down+f2.up*f1.down;
	result.down=f1.down*f2.down;
	return reduction(result);	
} 
//分数减法
Fraction minu(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.down-f2.up*f1.down;
	result.down=f1.down*f2.down;
	return reduction(result);	
} 
//分数乘法
Fraction multi(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.up;
	result.down=f1.down*f2.down;
	return reduction(result);	
}
//分数除法 
Fraction divide(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.down;
	result.down=f1.down*f2.up;
	return reduction(result);	
}
int main(){
	Fraction f1,f2;
	scanf("%lld/%lld %lld/%lld",&f1.up,&f1.down,&f2.up,&f2.down);
	f1=reduction(f1);
	f2=reduction(f2);
	
	showResult(f1);
	printf(" + ");
	showResult(f2);
	printf(" = ");
	showResult(add(f1,f2));
	printf("\n");
	
	showResult(f1);
	printf(" - ");
	showResult(f2);
	printf(" = ");
	showResult(minu(f1,f2));
	printf("\n");
	
	showResult(f1);
	printf(" * ");
	showResult(f2);
	printf(" = ");
	showResult(multi(f1,f2));
	printf("\n");
	
	showResult(f1);
	printf(" / ");
	showResult(f2);
	printf(" = ");
	if(f2.up==0) printf("Inf");
	else showResult(divide(f1,f2));
	printf("\n");
	
	return 0;
}
