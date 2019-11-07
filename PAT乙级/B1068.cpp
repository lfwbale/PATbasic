#include<stdio.h>
#include<math.h>
#include<map>
using namespace std;
int main(){
	int M,N,tol;
	scanf("%d %d %d",&M,&N,&tol);
	int colour[N][M];
	map<int,int>flags;
    int tempColour;
    for(int i=0;i<N;i++){
    	for(int j=0;j<M;j++){
    		scanf("%d",&tempColour);
    		colour[i][j]=tempColour;
    		//表示这个已经存在了 
    		if(flags.find(tempColour) != flags.end()) flags[tempColour]++;
			else flags[tempColour] = 1;
    	}
    }
    for(map<int,int>::iterator it=flags.begin();it!=flags.end();it++){
    	if(it->second!=1) flags.erase(it);
    }
    int num=0;int flag=0;
    int val,x,y;
    for(map<int,int>::iterator it=flags.begin();it!=flags.end();it++){
    	for(int i=0;i<N;i++){
    		for(int j=0;j<N;j++){
    			if(it->first==colour[i][j]){
    			if(i>0&&fabs(colour[i][j]-colour[i-1][j])<=tol) continue;
			    if(i<N-1&&fabs(colour[i][j]-colour[i+1][j])<=tol) continue;
			    if(j>0&&fabs(colour[i][j]-colour[i][j-1])<=tol) continue;
			    if(j<M-1&&fabs(colour[i][j]-colour[i][j+1])<=tol) continue;
			    if(i<N-1&&j>0&&fabs(colour[i][j]-colour[i+1][j-1])<=tol) continue;
			    if(i>0&&j>0&&fabs(colour[i][j]-colour[i-1][j-1])<=tol) continue;
			    if(i<N-1&&j<M-1&&fabs(colour[i][j]-colour[i+1][j+1])<=tol) continue;
			    if(i>0&&j<M-1&&fabs(colour[i][j]-colour[i-1][j+1])<=tol) continue;
			    num++;
			    val=colour[i][j];
			    x=i+1;
			    y=j+1;
			    if(num>1){
			    	printf("Not Unique");
			    	return 0;
			    }
    		}
    	}
    	}
    }
    	if(num==0){
    		printf("Not Exist");
    		return 0;
    	}
    	else if(num==1){
    			printf("(%d, %d): %d",y,x,val);
    			return 0;
    	}
    
    
}
