#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct student{
	char name[10];
	int h;
};
bool cmp(student a,student b){
	if(a.h!=b.h) return a.h>b.h;
	else return strcmp(a.name,b.name)<0;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	student a[n];
	student b[n];
	for(int i=0;i<n;i++){
		scanf("%s %d",a[i].name,&a[i].h);
	}
	//从高到低排序 
	sort(a,a+n,cmp);	
	int count=0;
	//解决最后一排先 
	int lnum=n/k+n%k;
	int lmpos=lnum/2;
	if(lnum%2==1){
		b[lmpos]=a[count++];
		for(int i=1;i<=lnum/2;i++){
			b[lmpos-i]=a[count++];
			b[lmpos+i]=a[count++];
		}
	}
	else{
		b[lmpos]=a[count++];
		b[lmpos-1]=a[count++];
		for(int i=1;i<=lnum/2-1;i++){
			b[lmpos+i]=a[count++];
			b[lmpos-1-i]=a[count++];
		}
	}
	for(int i=0;i<lnum;i++){
		printf("%s",b[i].name);
		if(i!=lnum-1) printf(" ");
	}
	printf("\n");
	//解决前面的
	int num=n/k;
	int mpos=num/2; 
	for(int j=0;j<k-1;j++){
		if(num%2==1){
			b[mpos]=a[count++];
			for(int i=1;i<=num/2;i++){
				b[mpos-i]=a[count++];
				b[mpos+i]=a[count++];
			}
		}
		else{
			b[mpos]=a[count++];
			b[mpos-1]=a[count++];
			for(int i=1;i<=num/2-1;i++){
				b[mpos+i]=a[count++];
				b[mpos-1-i]=a[count++];
			}	
		}
		for(int i=0;i<num;i++){
			printf("%s",b[i].name);
			if(i!=num-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
