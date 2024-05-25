#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,*ptr,max;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr!=NULL){
		printf("Enter elements: ");
		for (i=0;i<n;i++) scanf("%d",ptr+1);
		max=*(ptr);
		for (i=1;i<n;i++) if (ptr[i]>max) max=ptr[i];
		printf("Max num in the array is: %d",max);
	}
}
