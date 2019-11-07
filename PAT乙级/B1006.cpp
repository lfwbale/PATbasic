#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int i,j,k;
  i=n%10;// 个位
  j=(n/10)%10;//十位
  k=(n/100)%10;//百位
  int k1=0;
  while(k1<k){
    printf("B");
    k1++;
  }
  int j2=0;
  while(j2<j){
    printf("S");
    j2++;
  }
  int i2=0;
  while(i2<i){
    i2++;
    printf("%d",i2);
  }
  return 0;
}
