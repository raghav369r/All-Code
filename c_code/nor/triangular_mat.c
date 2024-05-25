#include<stdio.h>
int main(){
	int i,j,check=0,arr[3][3]={1,2,3,0,5,6,0,0,9};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			if(j<i)
				if(arr[i][j]!=0) check=1;
	}
	if(check==0) printf("Given matirx is upper triangular matrix ");
	else printf("Given matrix is not upper triangular matrix");
}
