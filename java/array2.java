import java.util.Scanner;
/*class array2{
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		int array[][]={{1},{2,3},{4,5,6}},i,j,k;
		for(int x[]:array){
			for(int x1:x)
				System.out.print(x1+"	");
				System.out.println();
		}
	}
}
*/
class array2{
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		int array[][],i,j,k;
		array=new int[3][];
		array[0]=new int[1];
		array[1]=new int[2];
		array[2]=new int[3];
		for(i=0;i<3;i++)
			for(j=0;j<=i;j++) array[i][j]=i+j;
		for(int x[]:array){
			for(int x1:x)
				System.out.print(x1+"	");
				System.out.println();
		}
	}
}
