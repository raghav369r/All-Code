import java.util.Scanner;
class test2{
	static void fabii(int range){
		int a=0,b=1,c=0;
		while(c<=range){
			System.out.print(c+"  ");
			a=b;
			b=c;
			c=a+b;
		}
	}
	static int fabiirec(int range){
		if(range==0||range==1) return 0;
		else
			return(fabiirec(range-1)+fabiirec(n-2));
	}
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		System.out.print("Enetr range to print fabii series: ");
		int range=scan.nextInt();
		fabiirec(range);
	}
}
