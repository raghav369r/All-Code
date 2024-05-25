import java.util.Scanner;
class handle2{
	public static void main(String ar[]){
		Scanner scan=new Scanner(System.in);
		try{
			System.out.println("Enter values of a b and String: ");
			int a=scan.nextInt();
			int b=scan.nextInt();
			String str=null;//=scan.next();
			System.out.println("A/B= "+a/b);
			System.out.println("stinglength= "+str.length());
		}
		catch(ArithmeticException e){
			//e.printStackTrace();
			System.out.println("Can't Divisable by 0!!");
		}		
		catch(NullPointerException e){
			System.out.println("Can't do operations on null!!");
		}
		catch(Exception e){
			System.out.println("Some Unkonwn Exeption!!");
		}
	}
}

