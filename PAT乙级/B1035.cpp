//自己写的 失败了 准备参考网上的 
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);//n个数
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int flag=0;//这个flag用来判断是不是归并 
	//判断插入排序
	int temp,count;
	for(int i=1;i<n;i++){
        sort(a,a+i);
		//每一趟结束 判断
		count=0;
		while(count<i){
			if(a[count]==b[count])
			count++;
		}
		if(count==i){
			printf("Insertion Sort\n");
            sort(a,a+i+1);
		    printf("%d",a[0]);
		    for(int j=1;j<n;j++){
		    	printf(" %d",a[j]);
		    } 
		    flag=1;
		break;
		} 
	}
	//如果插入排序不行 
	if(flag=0){
		int temp2;
		printf("Merge Sort\n");
		//因为还要再迭代一轮，所以必为中间结果 
		for(int i=1;i<n;i=i*2){
			for(int j=0;j<n;j=j+i){
				sort(a+j,a+j+i);
			}
		temp2=0;
		   while(temp2<n){
			if(a[temp2]==b[temp2]) temp2++;
			else break; 
		    }
		    //找着了 
		if(count==n){
		i=i*2;
		if(i>n) i=n;
		for(int j=0;j<n;j=j+i){
			sort(a+j,a+j+i);
		}
		printf("%d",a[0]);
		for(int j=1;j<n;j++){
			printf(" %d",a[i]);
		}
		break;	
		}	 
		} 
	}
	return 0; 
}
