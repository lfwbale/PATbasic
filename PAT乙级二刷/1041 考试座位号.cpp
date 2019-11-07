#include<stdio.h>
#include<string.h>
using namespace std;
struct inf{
	long long id;
	int chair;
};
int main(){
	inf stu[1010];
	int n; scanf("%d",&n);
	long long idnum;
	int jia,real;
	for(int i=0;i<n;i++){
		scanf("%lld %d %d",&idnum,&jia,&real);
		stu[jia].id=idnum;
		stu[jia].chair=real;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&jia);
		printf("%lld %d\n",stu[jia].id,stu[jia].chair);
	}
	return 0;
}
