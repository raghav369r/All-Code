class palinnum{
	public static void main(String args[]){
		int num=151,dup,rev=0,rem;
		dup=num;
		while(dup!=0){
			rem=dup%10;
			rev=rev*10+rem;
			dup/=10;
		}
		//System.out.println("hello ");
		if(num==rev) System.out.print(num+" is a palindrome number");
		else System.out.print(num+" is not a palindrome number");
	}
}
