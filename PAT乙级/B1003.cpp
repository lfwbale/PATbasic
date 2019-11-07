#include<stdio.h>
#include<string.h>
const int maxn=110;
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char str[maxn];
        scanf("%s",str);
        int pos_p,pos_t;
        int isright=0;
        int cnp=0,cnt=0;
        int len=strlen(str);
        for(int j=0;j<len;j++){
            if(str[j]=='P'){
                pos_p=j;
                cnp++;
            }
            else if(str[j]=='T'){
                    pos_t=j;
                    cnt++;
            }
                    else if(str[j]!='A'){
                        isright=1;
                        break;
                    }
            }
                    if(cnp==1&&cnt==1&&isright==0){
                        int lef=pos_p;
                        int mid=pos_t-pos_p-1;
                        int rig=len-pos_t-1;
                        if(mid>0&&rig==mid*lef){
                            printf("YES\n");
                            continue;
                        }
                    }
                    printf("NO\n");
    }
                    return 0;
}
