#include<stdio.h>
#include<stdlib.h>
struct men{
	int *ptr;
};
int main(){
	struct men m1,*m2,*ptr;
	printf("--> %lu ",sizeof(struct men));
	m2=(struct men *)malloc(3*sizeof(struct men));
	printf("--> %lu ",sizeof(*m2));
	m2->ptr=m2+1;
	m2+1->ptr=m2+2;
	m2+2->ptr=NULL;
	ptr=m2;
	while(ptr!=NULL){
		printf("%u -->",ptr->ptr);
		ptr=(ptr+1)-->ptr;
	}
}
