//3 -3 4 6 -10 9 8 -8
#include<stdio.h>
#include<stdlib.h>
int main(){
	//assuming given numsay name nums
	int len;
	scanf("%d",&len);
	int *nums=malloc(len*sizeof(int));
	for(int i=0;i<len;i++)
		scanf("%d",&nums[i]);
	//int nums[]={3,-3,4,6,-10,9,8,-8};
	//int len=sizeof(nums)/sizeof(nums[0]);
	int count=0;
	for(int i=0;i<len;i++){
		int sum=0;
		for(int j=i;j<len;j++){
			sum+=nums[j];
			if(sum==0){
				count++;
				//printf("%d %d\n",i,j);
			}
		}
	}
	printf("%d ",count);
}
