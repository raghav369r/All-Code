#include<stdio.h>
int main(){
	int i,j,n,arr[100],dig,sum=0;
	printf("Enter no of elements(must be even number): ");
	scanf("%d",&n);
	printf("Enter elements one by one: ");
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		if(i<n/2){
			while(arr[i]!=0){
				dig=arr[i]%10;
				arr[i]/=10;
			}
			sum=sum*10+dig;
		}
		else{
			dig=arr[i]%10;
			sum=sum*10+dig;
		}
	}
	printf("generated number= %d\n",sum);
	if(sum%11==0) printf("Number is divisible by 11 :)");
	else printf("Number is not divisible by 11 :( ");
}
