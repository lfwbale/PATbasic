#include<stdio.h>
int main(){
    char ans[90][90];
    int number=0;
    while(scanf("%s",ans[number])!=EOF){
        number++; //µ¥´Ê¸öÊý£»
    }
    for(int i=number-1;i>=0;i--){
        printf("%s",ans[i]);
        if(i>0){
            printf(" ");
        }
    }
    return 0;
}
