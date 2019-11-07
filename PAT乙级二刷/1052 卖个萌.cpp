#include<stdio.h>
#include<string.h>
int main(){
	char hand[1000]; char eye[1000]; char mouse[1000];
	gets(hand); gets(eye); gets(mouse);
	int handnum=0,eyenum=0,mousenum=0;
	for(int i=0;i<strlen(hand);i++){
		if(hand[i]=='[') handnum++;
	}
	for(int i=0;i<strlen(eye);i++){
		if(eye[i]=='[') eyenum++;
	}
	for(int i=0;i<strlen(mouse);i++){
		if(mouse[i]==']') mousenum++;
	}
	
	int n;scanf("%d",&n);
	int a[n][5];
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++) {
			scanf("%d",&a[i][j]);
		}
	}

 
	for(int i=0;i<n;i++){
		if(a[i][0]>handnum||a[i][1]>eyenum||a[i][2]>mousenum||a[i][3]>eyenum||a[i][4]>handnum){
				printf("Are you kidding me? @\\/@\n");
				continue;
			}
		if(a[i][0]<1||a[i][1]<1||a[i][2]<1||a[i][3]<1||a[i][4]<1){
				printf("Are you kidding me? @\\/@\n");
				continue;
		}
		//Êä³ö×óÊÖ
		int lhand=0,lhpos=0;
		for(int j=0;j<strlen(hand);j++){
			if(hand[j]=='[') lhand++;
			if(lhand==a[i][0]){
				lhpos=j+1;
				break;
			}
		}
		while(hand[lhpos]!=']'){
			printf("%c",hand[lhpos]);
			lhpos++;
		}
		
		printf("(");
		
		//Êä³ö×óÑÛ
		int leye=0,lepos=0;
		for(int j=0;j<strlen(eye);j++){
			if(eye[j]=='[') leye++;
			if(leye==a[i][1]){
				lepos=j+1;
				break;
			}
		}
		while(eye[lepos]!=']'){
			printf("%c",eye[lepos]);
			lepos++;
		}
		//Êä³ö×ì
		int m=0,mpos=0;
		for(int j=0;j<strlen(mouse);j++){
			if(mouse[j]=='[') m++;
			if(m==a[i][2]){
				mpos=j+1;
				break;
			}
		}
		while(mouse[mpos]!=']'){
			printf("%c",mouse[mpos]);
			mpos++;
		}
		//Êä³öÓÒÑÛ
		int reye=0,repos=0;
		for(int j=0;j<strlen(eye);j++){
			if(eye[j]=='[') reye++;
			if(reye==a[i][3]){
				repos=j+1;
				break;
			}
		}
		while(eye[repos]!=']'){
			printf("%c",eye[repos]);
			repos++;
		}	
		
		printf(")");
			
		//Êä³öÓÒÊÖ 
		int rhand=0,rhpos=0;
		for(int j=0;j<strlen(hand);j++){
			if(hand[j]=='[') rhand++;
			if(rhand==a[i][4]){
				rhpos=j+1;
				break;
			}
		}
		while(hand[rhpos]!=']'){
			printf("%c",hand[rhpos]);
			rhpos++;
		}	
			
		printf("\n");
	}
	return 0;
}
