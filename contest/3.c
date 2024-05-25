#include<stdio.h>
#include<string.h>
int main(){
	char str[10000];
	scanf("%s",str);
	//char str[]="GBRRBRG";
	int len=strlen(str);
	int g=0,b=0,r=0;
	for(int i=0;i<len;i++){
		if(str[i]=='G')g++;
		else if(str[i]=='B')b++;
		else r++;
	}
	int ind=0;
	while(r--)
		str[ind++]='R';
	while(g--)
		str[ind++]='G';
	while(b--)
		str[ind++]='B';
	puts(str);
}
