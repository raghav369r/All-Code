#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i,j,k,l,m,first,last,s,d,gr,le;
	gr=le=-1;
	scanf("%d",&n);	
	char **gene=calloc(n,sizeof(char*));
	int *health=calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		gene[i]=calloc(10,sizeof(char));
		scanf("%s",gene[i]);
	}
	for(i=0;i<n;i++)
		scanf("%d",&health[i]);
	scanf("%d",&s);
	int strand[s][2];
	char **dna=calloc(n,sizeof(char*));
	for(i=0;i<s;i++){
		dna[i]=calloc(10,sizeof(char));
		scanf("%d%d%s",&strand[i][0],&strand[i][1],dna[i]);
	}
	//for(i=0;i<s;i++)
	//	printf("%d %d %s",strand[i][0],strand[i][1],dna[i]);
	for(i=0;i<s;i++){
		int sum=0;
		for(j=0;dna[i][j]!='\0';j++){
			for(k=j;dna[i][k]!='\0';k++){
				char p[10];
				for(m=0,l=j;l<=k;l++,m++) p[m]=dna[i][l];
				p[m]='\0';
				//printf("\n%s \t%d %d %d",p,k,j,i);
				for(int o=strand[i][0];o<strand[i][1]+1;o++){
					int ch=strcmp(p,gene[o]);
					if(ch==0)
						sum+=health[o];	
				}
				//printf("\nsum= %d",sum);
			}
		}
		if(gr==-1) gr=le=sum;
		else{
			if(sum>gr) gr=sum;
			if(sum<le) le=sum;
		}
	
	}
	printf("%d %d",gr,le);
}
/*

6
a b c aa d b
1 2 3 4 5 6
3
1 5 caaab
0 4 xyz
2 4 bcdybc

*/
