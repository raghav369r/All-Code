#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n,l,k,dig;
	printf("Enter no of strings: ");
	scanf("%d",&n);
	char name[10][20];
	for(i=0;i<n;i++) scanf("%s",name[i]);
	for(j=0;j<n;j++){
		l=strlen(name[j]);
		dig=0;
		for(k=0;k<l;k++){
			if(name[j][k]>='0' && name[j][k]<='9')
			dig=1;
		}
		if(dig==1) printf("%s\n",name[j]);
	}
	
}
