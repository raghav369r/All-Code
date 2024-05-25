#include<stdio.h>
#include<stdlib.h>
struct allo{
    int ptr[3];
    //int *ptr=(int *)malloc(3*sizeof(int)); //won't work
};
int main(){
    int *ptr,n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
}
