import java.util.Scanner;
class divi{
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		int i,j,n,avg=0,sum=0;
		double sd;
		System.out.print("Enter no of elements: ");
		n=scan.nextInt();
		int arr[]=new int[n];
		for(i=0;i<n;i++){
			System.out.print("Enter element: ");
			arr[i]=scan.nextInt();
			avg+=arr[i];
		}
		avg/=n;
		for(i=0;i<n;i++)
			sum+=(arr[i]-avg)*(arr[i]-avg);
		sd=Math.sqrt(sum/n);
		System.out.print("Standard deviation= "+sd);
	}
}

