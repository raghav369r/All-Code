class p1{
	int age=30;
	String name;
	void display(){
		System.out.println("In parent class");
	}
}
class c1 extends p1{
	void display(int a){
		System.out.println("In child class 1");
		
	}
}
class c2 extends p1{
	void dispaly(){
		System.out.println("In child class 2");
	}
}
class main{
	public static void main(String a[]){
		c1 c=new c1();
		c.display();
	}
}
