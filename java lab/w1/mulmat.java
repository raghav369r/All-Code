import java.util.Scanner;
class mat{
	static void display(int arr[][],int r,int c){
		System.out.println("Matrix: ");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				System.out.print(arr[i][j]+"\t");
			System.out.println();
		}
	}
	public static void main(String a[]){
		int r1,c1,r2,c2,i,j,k;
		Scanner scan=new Scanner(System.in);
		System.out.print("enter no of rows and columns of 1st matrix: ");
		r1=scan.nextInt();
		c1=scan.nextInt();
		int [][]arr1=new int[r1][c1];
		System.out.println("Enter elements: ");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				arr1[i][j]=scan.nextInt();	
		}
		System.out.print("enter no of rows and columns of 1st matrix: ");
		r2=scan.nextInt();
		c2=scan.nextInt();
		int [][]arr2=new int[r2][c2];
		System.out.println("Enter elements: ");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++)
				arr2[i][j]=scan.nextInt();	
		}
		int [][]arr=new int[r1][c2];
		if(c1!=r2){
			System.out.println("no of columns of 1st matrix not equal to no of rows of second matrix!!\nso..matrices can't be multiplied!!");
			return;
		}
		else{
			for(i=0;i<r1;i++){
				for(j=0;j<c2;j++){
					arr[i][j]=0;
					for(k=0;k<c1;k++)
						arr[i][j]+=((arr1[i][k])*(arr2[k][j]));
				}
			}
		}
		display(arr1,r1,c1);
		display(arr2,r2,c2);
		display(arr,r1,c2);
	}
}
