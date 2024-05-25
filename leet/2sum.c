#include<stdio.h>
#include<stdlib.h>
int inserttoht(int *ht,int num,int n,int in){
	for(int i=num%n;;i++){
		i=i%n;
		if(ht[i]==-1){
			ht[i]=in;
			break;
		}
	}
}
int find(int *ht,int num,int n){
	for(int i=num%n;i<n;i++){
		i=i%n;
		if(ht[i]!=-1) return ht[i];
		else return -1;
	}
}
int main(){
	int arr[4]={2,7,11,15};
	int target=17;
	int n=4;
	int i,rem,ind;
	int *ht=malloc(n+1*sizeof(int));
	for(i=0;i<n;i++) ht[i]=-1;
	for(i=0;i<n;i++) inserttoht(ht,arr[i],4,i);
	for(i=0;i<n;i++) printf("%d  ",ht[i]);
	for(i=0;i<n;i++){
		rem=target-arr[i];
		ind=find(ht,rem,4);
		if(ind!=-1&&ind!=i){
			printf("%d %d",i,ind);
			break;
		}
	}
}
