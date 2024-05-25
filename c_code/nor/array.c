#include<stdio.h>
int main(){
	int arr[]={1,0,0,1,0,1,0,1,1,0,1,0,0,1,1,1,1,1,0,0};
	int len,i,j,z=0,temp;
	len=sizeof(arr)/4;
	for(i=0;i<len;i++)
		if(arr[i]==0) z++;
	for(i=0;i<z;i++){
		if(arr[i]==1){
			for(j=z;j<len;j++){
				if(arr[j]==0){
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
					break;
				}
			}
		}
	}
	for(i=0;i<len;i++) printf("%d ",arr[i]);
}
