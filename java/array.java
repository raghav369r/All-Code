import java.util.Scanner;
class array{
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		int array[],n,i;
		System.out.print("Enter no of elements: ");
		n=scan.nextInt();
		array=new int[n];
		System.out.print("enter elements: ");
		for(i=0;i<n;i++){
			array[i]=scan.nextInt();
		}
		for(int ele:array)
			System.out.print(ele+"-->");
	}
}
// arrays can also declared like 
// int[] array;
// int[] a1,a2,a3;   --> creates 3 arrays of type int 
// for length of array --> array.length
