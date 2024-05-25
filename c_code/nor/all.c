/*     pattern			s

	1           1		5
	1 2       2 1		3
	1 2 3   3 2 1		1
	1 2 3 4 3 2 1		0 
*/
/*
#include<stdio.h>
int main(){
		int i,j,s,j1,n;
		printf("Enetr no of rows: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
				for(j=1;j<=i;j++) printf("%d ",j);
				for(s=1;s<2*n-2*i;s++) printf("  ");
				j1=(i==n)?i-1:i;
				for(j=j1;j>0;j--) printf("%d ",j);
				printf("\n");

		}
}*/
/*12. Write a program to print the first ‘n’ prime numbers and prime numbers upto ‘n’
#include<stdio.h>
int main(){
	int i,count=0,n,j,check;
	printf("Enter no of prime numbers: ");
	scanf("%d",&n);
	printf("first %d prime numbers:\n",n);
	for(i=2;count<n;i++){
			check=0;
			for(j=2;j<=i/2;j++) if(i%j==0) check=1;
			if(check==0){
					printf("%d\n",i);
					count++;
			}
	}
	{
		int i,j,check;
		printf("prime numbers up to %d:\n",n);
		for(i=2;i<=n;i++){
				check=0;
				for(j=2;j<=i/2;j++) if(i%j==0) check=1;
				if(check==0) printf("%d\n",i);
		}
	}	
}*/
/*16. Write a program to print the following pattern for given ‘n’ value
For ex. If n=4, the output would be
2
3 5
7 11 13
17 19 23 29
#include<stdio.h>
int main(){
	int i,j,n,check,c,k=2;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(c=0;c<=i;){
			check=0;
			for(j=2;j<=k/2;j++) if(k%j==0) check=1;
			if(check==0){
				printf("%4d",k);
				c++;
			}
			k++;
		}
		printf("\n");
	}
}
*/
/*20. Write a program to search an array element using Binary search
#include<stdio.h>
int main(){
		int start,end,check=-1,mid,len,key;
		printf("Enter no of elements: ");
		scanf("%d",&len);
		int arr[len];
		printf("Enter elements: ");
		for(int i=0;i<len;i++) scanf("%d",&arr[i]);
		printf("Enter element to search in the array: ");
		scanf("%d",&key);
		start=0;
		end=len-1;
		for(start=0,end=len-1;start<=end;){
				mid=(start+end)/2;
				if(arr[mid]==key){
					check=mid;
					break;
				}
				else if(arr[mid]<key) start=mid+1;
				else end=mid-1;
		}
		if(check==-1) printf("Element not found in the array");
		else printf("Element found at index- %d",check);
}*/
/*21. Write a program to find the elements in array that are prime
#include<stdio.h>
int main(){
		int check,j,i,n;
		printf("enter no of elements: ");
		scanf("%d",&n);
		int arr[n];
		printf("Enter elememts: ");
		for(i=0;i<n;i++) scanf("%d",&arr[i]);
		printf("prime elements: \n");
		for(i=0;i<n;i++){
			check=0;
			for(j=2;j<=arr[i]/2;j++)
					if(arr[i]%j==0) check=1;
			if(check==0) printf("%d\n",arr[i]);
		}
}*/
/*22. Write a program to take an input array of ‘n’ numbers and print the second smallest
and second largest element of all elements in the array,
#include<stdio.h>
int main(){
		int max1,max2,min1,min2,i,n;
		printf("enter no of elements: ");
		scanf("%d",&n);
		int arr[n];
		printf("Enter elememts: ");
		for(i=0;i<n;i++) scanf("%d",&arr[i]);
		min1=arr[0];
		min2=arr[1];
		max1=arr[0];
		max2=arr[1];
		for(i=1;i<n;i++){
				if(arr[i]>max1){
						max2=max1;
						max1=arr[i];
				}
				else if(arr[i]>max2) max2=arr[i];
				if(arr[i]<min1){
						min2=min1;
						min1=arr[i];
				}
				else if(arr[i]<min2) min2=arr[i];
		}
		printf("1st max: %d\n",max1);
		printf("2nd max: %d\n",max2);
		printf("1st min: %d\n",min1);
		printf("2nd min: %d\n",min2);

}*/
/*26. Write a program to convert the Lower case letters to Upper Caste letters and Upper
case Letters to Lower Case Letters in a given input string
#include<stdio.h>
int main(){
	int i,n;
	char str[50];
	printf("Enter the string: ");
	gets(str);
	printf("Entered string: %s\n",str);
	for(n=0;str[n]!='\0';n++);  //for string length
	for(i=0;i<n;i++)
		if(str[i]>96 && str[i]<123) str[i]-=32;//upper to lower
		else if (str[i]>64 && str[i]<91) str[i]+=32;//lower to upper
	printf("L->U && u->L: %s",str);
}*/
/*28. Write a program to check whether the given input string is palindrome string or not
#include<stdio.h>
int main(){
		int i,len,check=0;
		char str[20];
		printf("Enter the string: ");
		gets(str);
		for(len=0;str[len]!='\0';len++);
		for(i=0;i<+len/2;i++)
			if(str[i]!=str[len-i-1]) check=1;
		if(check==0) printf("Entered string is a palindrome!");
		else printf("Entered string is not a palindrome!");
}*/
/*29. Write a progr9am to find the strings starting with “c” and “a” for the given n input
strings
#include<stdio.h>
int main(){
		int i,n;
		char str[20][20];
		printf("Enter no of strings: ");
		scanf("%d",&n);
		printf("Enter strings one by one: ");
		for(i=0;i<n;i++) scanf("%s",str[i]);
		printf("strings starting with c and a: \n");
		for(i=0;i<n;i++)
			if(str[i][0]=='c' || str[i][0]=='a') puts(str[i]);
}*/
/*30. Write a program to print the words of given input string in reverse order for ex: if
input string is “ I am an Indian”, the output would be “ Indian an am I"
#include<stdio.h>
int main(){
	int i,j,n,s;
	char str[100];
	printf("Enter the string: ");
	gets(str);
	for(n=0;str[n]!='\0';n++);
	for(i=n-1;i>=0;i--){
		if(str[i]==' ' || i==0){
			j=(i==0)?i:i+1;
			for(;j!=n && str[j]!=' ';j++) printf("%c",str[j]);
			printf(" ");
		}
	}
}*/
/*31. Write a program to arrange the given ‘n’ strings in Dictionary Order*/
#include<stdio.h>
#include<string.h>
int strlength(char *p){
		int len;
		for(len=0;p[len]!='\0';len++);
		return len;
}
void strcopy(char *s1,char *s2){
		int len,i;
		for(len=0;s2[len]!='\0';len++);
		for(i=0;i<=len;i++) s1[i]=s2[i];
}
void stringcon(char *s1,char *s2){
		int i,l1,l2;
		for(l1=0;s1[l1]!='\0';l1++);
		for(l2=0;s2[l2]!='\0';l2++);
		for(i=l1;i<l1+l2;i++) s1[i]=s2[i-l1];
}
void strltou(char *p){
	int len,i;
	for(len=0;p[len]!='\0';len++);
	for(i=0;i<len;i++)
		if(p[i]>64 && p[i]<91) p[i]+=32;//lower to upper
}
void strutol(char *p){
	int len,i;
	for(len=0;p[len]!='\0';len++);
	for(i=0;i<len;i++)
		if(p[i]>96 && p[i]<123) p[i]-=32;//upper to lower
}
int strcomp(char *s1,char *s2){
		int dif,i,l1,l2,l,check=-1;
		for(l1=0;s1[l1]!='\0';l1++);
		for(l2=0;s2[l2]!='\0';l2++);
		l=(l1>l2)?l1:l2;
		for(i=0;i<l;i++){
				if(s1[i]!=s2[i]){
					check=i;
					break;
				}
		}
		if(check==-1) return 0;
		else return(s1[i]-s2[i]);
}
int main(){
		char str[20][20],temp[20];
		int i,n,j;
		printf("Enter no of strings: ");
		scanf("%d",&n);
		printf("Enter strings one by one: ");
		for(i=0;i<n;i++) scanf("%s",str[i]);
		for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
						if(strcomp(str[j],str[i])<0){
								strcopy(temp,str[j]);
								strcopy(str[j],str[i]);
								strcopy(str[i],temp);
						}
				}
		}
		for(i=0;i<n;i++) puts(str[i]);	
}
/*32. Write a program to implement the string operations like length of String, String
Copying, String Concatenation, Conversion to Uppercase and String comparison
(define own function for each of the operation. Header file “string.h” is not allowed)
#include<stdio.h>
int strlength(char *p){
		int len;
		for(len=0;p[len]!='\0';len++);
		return len;
}
void strcopy(char *s1,char *s2){
		int len,i;
		for(len=0;s2[len]!='\0';len++);
		for(i=0;i<=len;i++) s1[i]=s2[i];
}
void stringcon(char *s1,char *s2){
		int i,l1,l2;
		for(l1=0;s1[l1]!='\0';l1++);
		for(l2=0;s2[l2]!='\0';l2++);
		for(i=l1;i<l1+l2;i++) s1[i]=s2[i-l1];
}
void strltou(char *p){
	int len,i;
	for(len=0;p[len]!='\0';len++);
	for(i=0;i<len;i++)
		if(p[i]>64 && p[i]<91) p[i]+=32;//lower to upper
}
void strutol(char *p){
	int len,i;
	for(len=0;p[len]!='\0';len++);
	for(i=0;i<len;i++)
		if(p[i]>96 && p[i]<123) p[i]-=32;//upper to lower
}
int strcomp(char *s1,char *s2){
		int dif,i,l1,l2,l,check=-1;
		for(l1=0;s1[l1]!='\0';l1++);
		for(l2=0;s2[l2]!='\0';l2++);
		l=(l1>l2)?l1:l2;
		for(i=0;i<l;i++){
				if(s1[i]!=s2[i]){
					check=i;
					break;
				}
		}
		if(check==-1) return 0;
		else return(s1[i]-s2[i]);
}
int main(){
		int len;
		char str[100]="king KOHLI",s2[100]="king KOHLIa";
		printf("Enter the string: ");
		//gets(str);
		printf("entered string: ");
		puts(str);
		puts(s2);
		//printf("length of string= %d\n",strlength(str));
		//strcopy(s2,str);
		//puts(s2);
		//stringcon(s2,str);
		//strutol(str);
		//strltou(s2);
		puts(str);
		puts(s2);
		printf("\n%d",strcomp(str,s2));		
}*/
/*33. Write a c program to implement Multiplication and Division Operations without using
operators “*” and “\” respectively. Define function “mul” for multiplication and “div”
for integer division.
//only for positive numbers of a,b
#include<stdio.h>
int mul(int a,int b){
	int sum,i;
	for(sum=0;b>0;b--) sum+=a;
	return sum;
}
int div(int a,int b){
	int sum=0,i;
	if(a>b)
		for(;a>=0;a-=b) sum++;
	return --sum;
}
int main(){
	int n,d;
	printf("Enter numerator and denominator: ");
	scanf("%d%d",&n,&d);
	printf("a*b=%d\n",mul(n,d));
	printf("a/b=%d",div(n,d));	
}*/

/*
*	
2 *	
* 3 *	
5 *  7 *	
* 11 * 13 *
*//*
#include<stdio.h>
int main(){
	int i,j,k,n=2,row,check;
	printf("Enter no of rows: ");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<=i;j++){
			if((i%2==0 && j%2==1)||(i%2==1 && j%2==0)){
		prime:	check=0;
				for(k=2;k<=n/2;k++) if(n%k==0) check=1;
				if (check==0) printf("%d ",n++);
				else {
					n++;
					goto prime;
				}
			}
			else printf("%c ",'*');
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int i,j,check=0,arr[3][3]={1,2,3,0,5,6,0,0,9};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			if(j<i)
				if(arr[i][j]!=0) check=1;
	}
	if(check==0) printf("Given matirx is upper triangular matrix ");
	else printf("Given matrix is not upper triangular matrix");
}*/
