import java.util.Scanner;
class array1{
	public static void main(String args[]){
	Scanner scan=new Scanner(System.in);
		int array[][],i,j,r,c;
		System.out.print("Enter no of rows and columns: ");
		r=scan.nextInt();
		c=scan.nextInt();
		array=new int[r][c];
		System.out.println("Enter elements: ");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++) array[i][j]=scan.nextInt();
		}
		for(int ele[]:array){
			for(int ele1:ele) System.out.print(ele1+"	");
			System.out.println();
		}	
	}
}
