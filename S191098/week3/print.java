class over{
	static void print(){
		System.out.println("U did't entered enything!");
	}
	static void print(String a,int b){
		System.out.println(a+b);
	}
	static void print(int i,String a){
		System.out.println(i+a);
	}
	static void print(double i,String a){
		System.out.println(i+a);
	}
	static void print(String a,double i){
		System.out.println(a+i);
	}
	static void print(String a,double i,String b){
		System.out.println(a+i+b);
	}
	static void print(double i,String a,double i1){
		System.out.println(i+a+i1);
	}
	static void print(String a,String b,String c){
		System.out.println(a+b+c);
	}
	static void print(String a,String b){
		System.out.println(a+b);
	}
	public static void main(String args[]){
		String name="raghav";
		print("raghav",10);
		print("king",0.9);
		print("my name is ",name);
	}
}
