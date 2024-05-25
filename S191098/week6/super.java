class parent{
	parent(){
		System.out.println("in parent class constructer");
	}
	String name="parent";
	void print(){
		System.out.println("Printing in parent class");
	}
}
class child extends parent{
	child(){
		super();
		System.out.println("in child class constructor");
	}
	String name="child";
	void parent(){
		System.out.println("name= "+super.name);
		super.print();	
	}
	void print(){
		System.out.println("Printing in child class");
	}
}
class test{
	public static void main(String a[]){
		child obj=new child();   //parent obj=new child();  is also accepted
		obj.print();
		obj.parent();
		System.out.println("name= "+obj.name);
	}
}

