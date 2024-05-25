import java.util.Scanner;
class handle1{
	public static void main(String ar[]){
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter value of a and b: ");
		try{
			int a=scan.nextInt();
			int b=scan.nextInt();
			try{
				System.out.println("A/B= "+a/b);
			}
			catch(ArithmeticException e){
				System.out.println("A/B= UnDefined");
			}
			finally{
				System.out.println("Hope ur code worked well :)");			
			}
		}
		catch(Exception e){
			System.out.println("Entered value is not integer!!");
			//System.out.println(e);
		}
		finally{
			System.out.println("Outer final");
		}
	}
}

