
//cheking amicable pir
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,xs=0,ys=0;
	printf("enter 2 numners to check amicable pair or not: \n");
	scanf("%d %d",&x,&y);
	for(int i=2;i<=x;i++){
		if (x%i==0) xs+=i;
	}
	for (int j=2;j<=y;j++){
		if (y%j==0) ys+=j;
	}
	if (xs==ys) printf("(%d,%d) is amicable pair",x,y);
	else printf("(%d,%d) is not amicable pair",x,y);
}
/*
//Area b/w three points
#include<stdio.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,area;
	printf("enter three points : :\n");
	printf("( x1 , y1 ): ");
	scanf("%f %f",&x1,&y1);
	printf("( x2 , y2 ): ");
	scanf("%f %f",&x2,&y2);
	printf("( x3 , y3 ): ");
	scanf("%f %f",&x3,&y3);
	area=((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y2-y3)));
	if (area<0) area=area*-1;
	area/=2.0;
	printf("area of triangle of points ( %.1f , %.1f )( %.1f, %.1f ) ( %.1f , %.1f) is \n", x1,y1,x2,y2,x3,y3);
	printf("\tAREA = %.3f",area);
	return 0;	
}
*/
/*
//finding cis of an angle
#include<stdio.h>
#include<math.h>
int fact(int x);
int main()
{
	float x,n,i=2;
	int j=1;
	printf("enter angle of cos: ");
	scanf("%f",&x);
	printf("enter no of terms: ");
	scanf("%f",&n);
	float sum=1,term;
	while(1){
		term=pow(x,i)/fact(i);
		if(j%2!=0) term=term*-1;
		sum+=term;
		j++;
		i=i+2;
		if (j==n) break;
	}
	printf(" cos(%.1f)=%.1f",x,sum);
}
int fact(int x)
{
		int n=1,fact=1;
		while (n<=x){
			fact*=n;
			n++;
		}
		return fact;
}
*/
/*
//finding e^x
#include<stdio.h>
#include<math.h>
int fact(int x);
int main()
{
	float x,n,i=1;
	printf("enter power of e: ");
	scanf("%f",&x);
	printf("enter no of terms: ");
	scanf("%f",&n);
	float sum=1,term;
	while (i<=n){
		term=pow(x,i)/fact(i);
		sum=sum+term;
		//printf("%f",term);
		i++;	
	}
	printf(" e^%.1f=%.3f",x,sum);
}
int fact(int x)
{
		int n=1,fact=1;
		while (n<=x){
			fact*=n;
			n++;
		}
	
		return fact;
}
//equation of line
#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,m,b;
	printf("enter points one (x1,y1): ");
	scanf("%f %f",&x1,&y1);
	printf("enter points two (x2,y2): ");
	scanf("%f %f",&x2,&y2);
	m=(y2-y1)/(x2-x1);
	b=y1-m*x1;
	printf("eqation of line having points (%.1f , %.1f ) , ( %.1f , %.1f )\n",x1,y1,x2,y2);
	printf("\ty = %.1f x ",m);
	 b>0 ? printf("+ %.1f",b):printf("%.1f",b);
	
	return 0;
	
}
//printing fibonacii series
#include<stdio.h>
#include<math.h>
int main()
{
	int z,n,x,i=0,j=1;
	printf("enter upto which we have to print: ");
	scanf("%d",&n);
	printf("fiboncii series from 0 to %d \n",n);
	printf(" %d , %d ,",i,j);
	while (1){
		x=i+j;
		if (x>n) break;
		printf(" , %d ",x);
		i=j;
		j=x;
	
		
	}
	printf("\n");
	int a=0,b=1,c;
	printf("%d  %d  ",a,b);
	for ( ; c<100 ;  ){
	    c=a+b;
	    printf("%d  ",c);
	    a=b;
	    b=c;
	}
	
}

/*
//finding leap year or not
#include<stdio.h>
int main()
{
	long int year;
	printf("Enter year to check leap year or not: ");
	scanf("%d",&year);
	if (year%400==0)
		printf("%d is leap year",year);
	else if (year%100==0)
		printf("%d is not leap year",year);
	else if (year%4==0)
		printf("%d is leap year",year);
	else 
		printf("%d is not leap year",year);
		
}
//finding sin x
#include<stdio.h>
#include<math.h>
int fact(int x);
int main()
{
	float x;
	int i=1,j=1,n;
	printf("enter angle of sin: ");
	scanf("%f",&x);
	printf("enter no of terms: ");
	scanf("%d",&n);
	float sum=0,term;
	while(1){
		term=pow(x,i)/fact(i);
		//if(j%2==0) term=term*-1;
		if (j%2==0) sum=sum-term;
		else sum=sum+term;
		
		j++;
		i=i+2;
		if (j>n) break;
	}
	printf("sin(%.1f)=%.1f",x,sum);
}
int fact(int x)
{
		int n=1,fact=1;
		while (n<=x){
			fact*=n;
			n++;
		}
		return fact;
}

