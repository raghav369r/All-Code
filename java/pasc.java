import java.util.*;
class pasc{
	static void pascterm(int row){
		int arr[][],a,b;
		arr= new int[row][row];
		for(a=0;a<row;a++){
			for(b=0;b<=a;b++){
				if(b==0 || b==a) arr[a][b]=1;
				else arr[a][b]=arr[a-1][b-1]+arr[a-1][b];
				System.out.print(arr[a][b]+" ");
			}
			System.out.println();
		}
	}
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		int row;
		System.out.print("Enter no of rows: ");
		row=scan.nextInt();
		pascterm(row);
	}
}
