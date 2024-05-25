//s1=hello  s2=hai o/p: s1=haiolleh
//s1=dhoni  s2=kohli o/p: s1=kohliinodh
#include<stdio.h>
#include<string.h>
void stringmans(char *s1,char *s2){
    int i,j,n,n1,n2;
    n1=strlen(s1);
    n2=strlen(s2);
    char a[10];
    for(i=0;i<=n1;i++) a[i]=s1[n1-1-i];
    //a[i]='\0';
    //puts(a);
    strcpy(s1,s2);
    strcat(s1,a); 
}
int main(){
    char s1[30],s2[30];
    printf("Enter two strings: ");
    scanf("%s%s",s1,s2);
    stringmans(s1,s2);
    puts(s1);
}
