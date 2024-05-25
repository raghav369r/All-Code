import java.util.*;
class atm{
	int acno;
	double amount;
	String name;
	void deposit(double amt){
		amount=amount+amt;
		System.out.println("amount= "+amount);
	}
	void bal_enq(){
		System.out.println("Totle amount= "+amount);
	}
	void withdraw(double amt){
		amount-=amt;
		System.out.println("amount withdrawed= "+amt);
		System.out.println("Available amount= "+amount);
	}
	void display(){
		System.out.println("Account number= "+acno);
		System.out.println("Name= "+name);
		System.out.println("Amount= "+amount);
	}
	void insert(int acno,double amt,String n){
		acno=acno;
		amount=amt;
		name=n;
	}
}
class test{
	public static void main(String args[]){
		atm ac1=new atm();
		String exit="y";
		ac1.insert(1098,345432.98,"babu");
		while(exit=="y" || exit=="Y"){
		System.out.println("1: Deposit\n2: Balance enqiry\n3: Withdraw\n4: Display\n5: insert\n6: exit :)");
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter your choice: ");
		int a=scan.nextInt();
		switch(a){
			case 1: {
				System.out.print("Enter amount to deposit: ");
				double b=scan.nextDouble();
				ac1.deposit(b);
				break;
			}
			case 2: {
				ac1.bal_enq();
				break;
			}
			case 3: {
				System.out.print("Enter amount to withdraw: ");
				double c=scan.nextDouble();
				ac1.withdraw(c);
				break;
			}
			case 4: {
				ac1.display();
				break;
			}
			case 5: {
				System.out.println("Enter account number amount and name:");
				int d=scan.nextInt();
				double e=scan.nextDouble();
				String f=scan.nextLine();
				ac1.insert(d,e,f);
				break;
			}
			default: System.out.println("invalid choice!");
		}
		System.out.println("Do u want to countinue ur trnsaction(y/n): ");
		exit=scan.nextLine();
		//System.out.println("D");
		
	}
	}
}
