import java.util.*;
class pattern4{
	public static void main(String args[]){
		int i,j,s,j1,n;
		System.out.print("Enter no of rows: ");
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++) System.out.print(j+" ");
			for(s=1;s<2*n-2*i;s++) System.out.print("  ");
			j1=(i==n)?i-1:i;
			for(j=j1;j>0;j--) System.out.print(j+" ");
			System.out.print("\n");
		}
	}
}
