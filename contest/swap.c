#include<stdio.h>
int main(){
    int a=25;
    int b=(a&0xAAAAAAAA)>>1 | (a&0x55555555)<<1;
    printf("%d ",b);
}
