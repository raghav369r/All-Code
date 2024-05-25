import java.util.*;
class matrix{
	int r,c;
	int arr[][];
	matrix(boolean var){
		Scanner scan=new Scanner(System.in);
		System.out.print("enter no of rows and columns: ");
		r=scan.nextInt();
		c=scan.nextInt();
		arr=new int[r][c];
		System.out.println("Enter elements: ");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				arr[i][j]=scan.nextInt();	
		}
	}
	matrix(){}
	void display(){
		System.out.println("Matrix: ");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				System.out.print(arr[i][j]+"\t");
			System.out.println();
		}
	}
	matrix(int arr[][],int r1,int c1){
		this.arr=arr;
		r=r1;
		c=c1;
	}
	matrix mulmat(matrix m1,matrix m2){
		int i,j,k;
		//m1.display();
		System.out.println("m1.ar[][]");
		for(i=0;i<m1.r;i++){
			for(j=0;j<m1.c;j++)
				System.out.print(m1.arr[i][j]+"\t");
			System.out.println();
		}
		m2.display();
		if(m1.c!=m2.r){
			return null;
		}
		else{
			System.out.println("m1.ar[][]");
		for(i=0;i<m1.r;i++){
			for(j=0;j<m1.c;j++)
				System.out.print(m1.arr[i][j]+"\t");
			System.out.println();
			}
			arr=new int[m1.r][m2.c];
			for(i=0;i<m1.r;i++){
				for(j=0;j<m2.c;j++){
					arr[i][j]=0;
					for(k=0;k<m2.r;k++){
						arr[i][j]+=((m1.arr[i][k])*(m2.arr[k][j]));
						System.out.println("arr["+i+"]["+k+"]= "+m1.arr[i][k]);
						//System.out.pri ntln(arr[i][j]+"  "+m1.arr[i][k]+"  "+m2.arr[k][j]);
					}
				}
			}
			//System.out.println("Matrix: ");
			/*for(i=0;i<m1.r;i++){
				for(j=0;j<m2.c;j++)
					System.out.print(arr[i][j]+"\t");
				System.out.println();
			}*/
			matrix res=new matrix(arr,m1.c,m2.r);
			return res;
		}
	}
}
class test{
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		matrix m1=new matrix(true);
		matrix m2=new matrix(true);
		matrix mul=m1.mulmat(m1,m2);
		mul.display();
	}
}
