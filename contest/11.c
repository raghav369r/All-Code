#include<stdio.h>
#include<math.h>
int main(){
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	n1=fmax(n1,2);
	int i=fmax(2,n1),count=0;
	while(i<=n2){
		int flag=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=1;
			}
		}
		if(flag==0){
			count++;
			//printf("%d ",i);
		}
		i++;
	}
	printf("%d ",count);
}
