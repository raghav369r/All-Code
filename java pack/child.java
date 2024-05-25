package child;
import parent.*;
import java.util.*;
class child extends parent{
	void welcome1(){
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter ur name: ");
		String s=scan.nextLine();
		System.out.println("Welcome "+s);
	}
	public static void main(String args[]){
		child obj=new child();
		obj.welcome();
		obj.welcome1();
	}
}
class main{
	/*public static void main(String args[]){
		child obj=new child();
		obj.welcome();
		obj.welcome1();
	}*/
}
