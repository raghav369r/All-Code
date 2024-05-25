#include<stdio.h>
int p=0;
void fill(int *arr,int h1,int h2){
    int min=(arr[h1]<arr[h2])?arr[h1]:arr[h2];
    if(min==0) return;
    for(int i=h1+1;i<h2;i++){
        p=p+min-arr[i];
        //printf("h1=%d h2=%d min=%d arr[i]=%d %d \n",h1,h2,min,arr[i],p);
        arr[i]=min;
    }
}
void combine(int *arr,int s,int m,int e){
    //printf("combine %d %d %d\n",s,m,e);
    int h1=s,h2=m+1;
    for(int i=s;i<=m;i++)
        if(arr[i]>arr[h1]) h1=i;
    for(int i=m+1;i<=e;i++)
        if(arr[i]>=arr[h2]) h2=i;
    fill(arr,h1,h2);
}
int merge(int *arr,int s,int e){
    if(s<e){ //return p;
         int m=(s+e)/2;
  	 merge(arr,s,m);
	 merge(arr,m+1,e);
	 combine(arr,s,m,e);
    }
    return p;
}
int trap(int* height, int heightSize){
    return merge(height,0,heightSize-1);
}
int main(){
	//int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
	int arr[6]={4,2,0,3,2,5};
	printf("%d \n",trap(arr,6));
	//for(int i=0;i<12;i++) printf("%d ",arr[i]);
}
