#include<stdio.h>
typedef char* string;
string get_string(string a){
	printf("%s ",a);
	string b="raghav";
	return b;
}
int main(){
	//string answer=get_string("What's ur name?");
	string a;
	scanf("%s",a);
	string b=a;
	printf("hello, %s",b);
}
