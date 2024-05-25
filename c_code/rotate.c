#include<stdio.h>
void rotate(int *,int,int);
int main(){
	int arr[7]={1,2,3,4,5,6,7},k,len=7;
	printf("ENter k VAlue: ");
	scanf("%d",&k);
	rotate(arr,k,len);
	for(int i=0;i<len;i++) printf("%d ",arr[i]);
}
void rotate(int *arr,int k,int len){
	k=k%len;
	int i,tmp=arr[0],a;
	for(i=k;i!=0;i=(i+k)%len){
		a=tmp;
		tmp=arr[i];
		arr[i]=a;
	}
	arr[i]=tmp;
}
