#include<stdio.h>
#include<stdlib.h>
union player{
	//int a;
	char *ptr;
	//ptr=(char *)malloc(2*(sizeof(char)));
};//ptr=(int* )malloc(n*(sizeof(int)));
int main(){
	union player p;
	p->ptr=5;	
	printf("%c",p->ptr);
}
/*
#include<stdio.h>
#include<stdlib.h>
union player{
	int a[5];
	int *ptr;
	ptr=(int *)malloc(2*sizeof(b));
};
int main(){
	union player p;
	p.a=5;	
	printf("%c",p->ptr);
}*/

