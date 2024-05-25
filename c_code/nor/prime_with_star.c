/*
*	
2 *	
* 3 *	
5 *  7 *	
* 11 * 13 *
*/
#include<stdio.h>
int main(){
	int i,j,k,n=2,row,check;
	printf("Enter no of rows: ");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<=i;j++){
			if((i%2==0 && j%2==1)||(i%2==1 && j%2==0)){
		prime:	check=0;
				for(k=2;k<=n/2;k++) if(n%k==0) check=1;
				if (check==0) printf("%d ",n++);
				else {
					n++;
					goto prime;
				}
			}
			else printf("%c ",'*');
		}
		printf("\n");
	}
}
