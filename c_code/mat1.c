#include<stdio.h>
//int n=4,mat[4][4];
//int **mat,n=4;
int n=4,no=0;
void path(int mat[4][4],int i,int j){
	if(i==3&&j==3){
		no++;
		return ;
	}
	else if(i>3||j>3) return;
	else if(mat[i][j]) return;
	else{
		path(mat,i,j+1);
		path(mat,i+1,j);
	}
}
int main(){
	int i,j,p=0;
	int mat[][4]={{0,1,0,0},{0,0,0,0},{0,0,0,0},{0,0,1,0}};
	/*mat=calloc(n,sizeof(int*));
	for(i=0;i<n;i++)
		mat[i]=calloc(n,sizeof(int));
	*/
	path(mat,0,0);
	printf("No Of Paths: %d",no);
}

