#include<stdio.h>
char fun(char *name){
	int freq[26]={0},i,l;
	char r='0';
	l=strlen(name);
	for(i=0;i<l;i++){
		freq[name[i]-'a']++;
	}
	//for(i=0;i<26;i++) if(freq[i]!=0) printf("%c-%d\n",i+'a',freq[i]);
	for(i=0;i<26;i++) if(freq[i]%2==1) r=i+'a';
	return(r);
}
char main(){
	char name[]={"abaccdedbaebcba"};
	char res=fun(name);
	printf("%c",res);
	
}
