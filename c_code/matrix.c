#include<stdio.h>
int main(){
	int i=0,j,k,n=2*4+2*2;
	int r=3,c=4;
	//char mat[4][4]={{"abcd"},{"efgh"},{"ijkl"},{"mnop"}};
	char mat[3][4]={{"abcd"},{"efgh"},{"ijkl"}};
	//char mat[4][3]={{"abc"},{"efg"},{"ijk"},{"mno"}};
	//rotate(mat);
for(k=0;k<1;k++){
	char tmp=**mat;
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
}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%c ",mat[i][j]);
		printf("\n");
	}
}
