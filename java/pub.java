class pub{
	private int a;
	pub(){
		a=10;
	}
	public static void main(String args[]){
		pub a=new pub();
		//a.a=109;
		pub1 b=new pub1();
		System.out.print("private int "+b.a);
	}
}
class pub1{
	protected int a=1;
}
