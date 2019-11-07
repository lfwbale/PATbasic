#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
long long gcd(long long a,long long b){
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
struct fraction{
	long long up;
	long long down;
}; 

fraction simple(fraction p){
	if(p.down<0){
		p.up=-p.up;
		p.down=-p.down;
	}
	if(p.up==0){
		p.down=1;
	}
	else{
		long long temp=gcd(abs(p.up),p.down);
		p.up=p.up/temp;
		p.down=p.down/temp;
	}
	return p;
}
void showresult(fraction p){
    if(p.up<0) printf("(-");
    if(abs(p.up)/p.down!=0||p.up==0) printf("%lld",abs(p.up)/p.down);
    if(abs(p.up)/p.down!=0&&p.down!=1) printf(" "); 
    if(p.down!=1) printf("%lld/%lld",abs(p.up)%p.down,p.down);
    if(p.up<0) printf(")");
}
int main(){
	long long a,b,c,d;
	fraction x,y,one,two;
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
    x.up=a;x.down=b;
    y.up=c;y.down=d;
    one=simple(x); two=simple(y);
    
    //¼Ó 
    showresult(one);
    printf(" + ");
    showresult(two);
    printf(" = ");
    fraction plus;
    plus.up=one.up*two.down+one.down*two.up;
    plus.down=one.down*two.down;
    showresult(simple(plus));
    printf("\n");
    
    
    //¼õsubtract
    showresult(one);
    printf(" - ");
    showresult(two);
    printf(" = ");
	fraction jian;
	jian.up=one.up*two.down-one.down*two.up;
	jian.down=one.down*two.down;
	showresult(simple(jian));
	printf("\n");
	
	
	//³Ëmultiply
	showresult(one);
    printf(" * ");
    showresult(two);
    printf(" = ");
	fraction mul;
	mul.up=one.up*two.up;
	mul.down=one.down*two.down;
	showresult(simple(mul));
	printf("\n");
	
	//³ýdivid
	showresult(one);
    printf(" / ");
    showresult(two);
    printf(" = ");
    if(two.up==0) printf("Inf");
    else{
    	fraction divid;
    	divid.up=one.up*two.down;
    	divid.down=one.down*two.up;
    	showresult(simple(divid));
    	
    }
	 
    return 0;
}
