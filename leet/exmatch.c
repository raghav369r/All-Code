#include<stdio.h>
#include<stdlib.h>
#define bool int
#define false 0
#define true 1
bool com(){
	char s[]="aaa";
	char p[]="ab*a*c*a";
	int i,j=0;
	for(i=0;p[i]!='\0';i++){
		if(s[j]=='\0'){
			if(p[i]=='*' && p[i+1]=='\0') return 1;
			else return 0;
		}
		else if(p[i]=='.') j++;
		else if(p[i]=='*'){
			int len=0;
			if(p[i-1]=='.'){
				p[i-1]=s[j-1];
				if(p[i+1]=='\0') return 1;	
			}
			char c=p[i-1];
			//i++;
			int a=i+1;
			while(p[a]==c) a++,len++;
			int l=0;
			while(s[j]==c){j++;l++;}
		//	printf("l= %d j= %d",l,j);
			if(l<len) return 0;
			i=a-1;
		}
		else{
			if(p[i+1]=='*'){continue;} 
			else if(p[i]==s[j])
				j++;
		}
	}
	if(s[j]=='\0') return 1;
	else {printf("ss");return 0;}
}
int main(){
	printf("%d ",com());
}
