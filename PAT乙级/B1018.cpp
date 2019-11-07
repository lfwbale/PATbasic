#include<stdio.h>
void acmp(int a,int b,int c){
	if(a>=b&&a>=c) printf("B");
	else if(b>a&&b>=c) printf("C");
	else if(c>a&&c>b) printf("J");
}
void bcmp(int a,int b,int c){
	if(b>=a&&b>=c) printf("B");
	else if(c>=a&c>b) printf("C");
	else if(a>b&&a>c) printf("J");
}
int main(){
	int n;
	scanf("%d",&n);//½»·æ´ÎÊý£»
	char a[n],b[n];
	for(int i=0;i<n;i++){
		scanf(" %c %c",&a[i],&b[i]);
	} 
	int win=0,draw=0,lose=0;
	int bwin=0,cwin=0,jwin=0;
	int blose=0,close=0,jlose=0;
	for(int i=0;i<n;i++){
		if(a[i]=='B'){
			if(b[i]=='B') {
			draw++;
		    }
			else if(b[i]=='C') {
			win++;
			bwin++;
		    }
			else {
			lose++;
			blose++;
		    }
	}
		else if(a[i]=='C'){
			if(b[i]=='B') {
			lose++;
			close++;
		}
			else if(b[i]=='C') draw++;
			else {
			win++;
			cwin++;
		}
	}
		else if(a[i]=='J'){
			if(b[i]=='B') {
			win++;
			jwin++;
		}
			else if(b[i]=='C') { 
			lose++;
			jlose++;
		}
			else draw++;
	}
		
	}
	printf("%d %d %d\n",win,draw,lose);
	printf("%d %d %d\n",lose,draw,win);
	acmp(bwin,cwin,jwin);
	printf(" ");
	bcmp(blose,close,jlose);
	return 0;
}
