#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int **m;
void lonpali(char *s,int len,int **m){
	printf("%s \n",s);
	int a=0,b=0;
	for(int i=0;i<len-1;i++)
		m[i][i]=1;
	for(int l=1;l<len;l++){
		for(int i=0;i<len-l;i++){
			int j=i+l;
			m[j][i]=1;
			//m[i][j]=0;
			if(s[i]==s[j]&&m[i+1][j-1]==1){
				//if((i+1)>=(j-1)) 
				//m[i+1][j-1]==1) m[i][j]=1;
				m[i][j]=1;
				a=i;
				b=j;
			}
		}
	}
	for(int i=a;i<=b;i++) printf("%c",s[i]);
	/*for(int i=0;i<len;i++){
		for(int j=0;j<len;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}*/
}
int main(){
	char p[50];
	printf("Enter string: ");
	scanf("%s",p);
	int len=strlen(p);
	int **m=calloc(len,sizeof(int*));
	for(int i=0;i<len;i++)
		m[i]=calloc(len,sizeof(int));
	//printf("%s \n",p);
	lonpali(p,len,m);
}
/*
char * longestPalindrome(char * s){
    int len=strlen(s);
    int **m=calloc(len,sizeof(int*));
    int a=0,b=0;
	for(int i=0;i<len;i++){
        m[i]=calloc(len,sizeof(int));
		m[i][i]=1;
    }
	for(int l=1;l<len;l++){
		for(int i=0;i<len-l;i++){
			int j=i+l;
			m[j][i]=1;
			if(s[i]==s[j]&&m[i+1][j-1]==1){
				m[i][j]=1;
				a=i;
				b=j;
			}
		}
	}
	s[b+1]='\0';
    return (s+a);
}
*/
