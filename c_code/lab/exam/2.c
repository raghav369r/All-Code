#include<stdio.h>
int main(){
	void *ptr;
	char c='a';
	int i=10;
	ptr=&c;
	printf("%c\n",*(int *)ptr);
	ptr=&i;
	printf("%c\n",*(int *)ptr);
	
}
