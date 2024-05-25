#include<stdio.h>
#include<stdlib.h>
void dfs(int **array,int i,int j,int n,int m){
    array[i][j]=-1;
    if(i-1>=0 && array[i-1][j]==1) dfs(array,i-1,j,n,m);
    if(j-1>=0 && array[i][j-1]==1) dfs(array,i,j-1,n,m);
    if(i+1<n && array[i+1][j]==1) dfs(array,i+1,j,n,m);
    if(j+1<m && array[i][j+1]==1) dfs(array,i,j+1,n,m);
}
int main(){
    //int array[6][5]={{1,0,0,0,0},{0,0,1,1,0},{0,1,1,0,0},{0,0,0,0,0},{1,1,0,0,1},{1,1,0,0,1}};
    //int n=6,m=5,count=0;
    int n,m,count=0;
    printf("Enter no of rows columns and elements: ");
    scanf("%d%d",&n,&m);
    int **array=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        array[i]=malloc(m*sizeof(int));
        for(int j=0;j<m;j++)
            scanf("%d",&array[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array[i][j]==1){
                count++;
                dfs(array,i,j,n,m);
            }
        }
    }
    printf("%d ",count);
}
