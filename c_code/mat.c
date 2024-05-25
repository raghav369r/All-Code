#include<stdio.h>
#include<stdlib.h>
void rotate(char *,int,int);
int main(){
	int r=4,c=4,i,j;
	char **mat=calloc(r,sizeof(char*));
	for(i=0;i<r;i++)
		mat[i]=calloc(c,sizeof(char));
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			scanf("%c",&mat[i][j]);
	}
	rotate(*mat,r,c);
}
void rotate(char *mat,int r,int c){
	int s=(r<c)?r:c;
	if(s/2==0) return;
	char tmp=**mat;
	int i;	
	for(i=0;;){
		if(i<c-1){
			*(*mat+i)=*(*mat+i+1);
			i++;
		}
		else if(i<=r*c-1&&i>r*c-c){
			*(*mat+i)=*(*mat+i-1);
			i--;
		}
		else if(i>=c-1){
			*(*mat+i)=*(*mat+i+c);
			i=i+c;
		}
		if(i==r*c-c){
			break;	
		}
	}
	for(i==r*c-c;i>c;i=i-c){
		*(*mat+i)=*(*mat+i-c);
	}
	*(*mat+i)=tmp;
	rotate((*(mat+1))+1,r-1,c-1);
}
