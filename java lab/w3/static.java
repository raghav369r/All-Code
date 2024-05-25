class a{
	static int num;
	static void table(int n){
		for(int i=1;i<11;i++)
			System.out.println(n+" x "+i+" = "+n*i);
	}
	static{
		System.out.println("static block");
		num=111;
		int n=5;
		for(int i=1;i<11;i++)
			System.out.println(n+" x "+i+" = "+n*i);
	}
	public static void main(String a[]){
		System.out.println("main method");
		System.out.println("num= "+num);
		table(10);
	}
}
