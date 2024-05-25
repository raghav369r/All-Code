class p1{
	int age;
	String name;
	p1(){
		age=10;
		System.out.println("parent contstructor ");
	}
	void display(){
		System.out.println("In parent class");
	}
}
class p2 extends p1{
	p2(){
		age=20;
		//super();
		System.out.println("in child constructer");
	}
	void display(){
		System.out.println(super.age);
		System.out.println("In child class 1");
		
	}
}
class p3 extends p2{
	p3(){
		age=30;
		System.out.println("in child 2");
		//super();
	}
	void display(){
		//System.out.println("In child class 2");
		super.display();
		System.out.println(age);
		//System.out.println("In child class 2");
	}
}
class main1{
	public static void main(String a[]){
		p3 c=new p3();
		c.display();
	}
}
