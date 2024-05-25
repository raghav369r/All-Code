class parent{
	final void print(){
		System.out.println("final method");
	}	
}
class child extends parent{
	void print(){          //C.T error
		System.out.println("Method overrided");
	}
}
class test1{
	public static void main(String a[]){
		child obj=new child();
		obj.print();          //final mehod can be accesed by child
	}
}
