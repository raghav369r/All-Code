#include<stdio.h>
#include<stdlib.h>
int divide(int dividend, int divisor){
    if(dividend>divisor) return 0;
    int ps=(dividend<0)?-1:1;
    int qs=(divisor<0)?-1:1;
    int p=abs(dividend);
    int q=abs(divisor);
    int res=0;
    while(p>=divisor){
        printf("%d ",res);
        res++;
        p-=q;
    }
    printf("%d ",res);
    return ps*qs*res;
}
int main(){
    return divide(10,3);
}