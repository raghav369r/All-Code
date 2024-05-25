#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
	int arr[5]={5,6,7,10,1};
	qsort(arr+2,5,sizeof(int),comp);
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
}
    
