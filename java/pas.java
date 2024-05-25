import java.util.Scanner;
class pas{
	static int fact(int a){
		int fac=1;
		for(;a>0;a--) fac*=a;
		return fac;
	}
	public static void main(String args[]){
		int i,j,term,s,n;
		System.out.print("Enter no of rows: ");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(i=0;i<n;i++){
			for(s=2;s<=n-i;s++) System.out.print(" ");
			for(j=0;j<=i;j++){
				term=fact(i)/(fact(j)*fact(i-j));
				System.out.print(term+" ");
			}
			System.out.println();
		}
	}
}
