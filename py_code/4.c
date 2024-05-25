#include <stdio.h>
#include <string.h>
int main() {
    int i,j,k,l,n,c,swap=0,fre[4]={0};
    char str1[25];
    scanf("%s",str1);
    l=strlen(str1);
	n=l/4;
    for(i=0;i<l;i++) fre[str1[i]-'a']++;
    for(i=0;i<4;i++){
    	while(fre[i]!=n){
    		if(fre[i]>n){
    			for(j=4,c=0;j>=0;j--){
    				if(fre[j]<n){
    					for(k=0;k<l;k++){
    						if(str1[k]==i+'a'){
    							str1[k]=j+'a';
    							fre[i]--;
    							fre[j]++;
    							swap++;
    							c=1;
    							break;
    						}
    					}
    					if(c==1) break;
    				}
    			}	
    	    }	
    	}
    }
    puts(str1);
    printf("%d\n",swap);
}
