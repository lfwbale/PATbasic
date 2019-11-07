#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);//应该是a[i] 你写的是a[i]
    }
    //输出a1
    int sum1=0,flag1=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==0&&a[i]%2==0){
            flag1=1;
            sum1=sum1+a[i];
        }
    }
    if(flag1==1){
        printf("%d ",sum1);
    }
    else{
        printf("N ");
    }
    //输出A2
    int sum2=0,flag2=0;
    int temp=2;
    for(int i=0;i<n;i++){
        if(a[i]%5==1){
        	flag2=1;
        	if(temp%2==0){
        		sum2=sum2+a[i];
        		temp++;
        	}
        	else{
        		sum2=sum2-a[i];
        		temp++
        	}
}
    }
    if(flag2==1){
        printf("%d ",sum2);
    }
    else{
        printf("N ");
    }
    //输出A3
    int sum3=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==2){
            sum3++;
        }
    }
    if(sum3!=0){
    printf("%d ",sum3);
    }
    else{
        printf("N ");
        
    }
    //输出A4
    int flag4=0,count4=0;
    float sum4=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==3){
            flag4=1;
            count4++;
            sum4+=a[i];
        }
    }
    float avg=0;
    if(flag4==1){
        avg=sum4/count4;
        printf("%.1f ",avg);//
    }
    else{
        printf("N ");
    }
    //输出A5
    int flag5=0;int k=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==4){
            flag5=1;
            if(a[i]>k){
                k=a[i];
            }
        }
    }
    if(flag5==1){
        printf("%d",k);
    }
    else{
        printf("N");
    }
    return 0;
}

