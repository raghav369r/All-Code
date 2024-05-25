interface in1{
	//int data;
	default void print(){               //we can use default in interface
		System.out.println("in in1");
	}	
}
class cls implements in1{
	public void print(){
		data=5;
		System.out.println("data= "+in1.data);
	}
	public static void main(String a[]){
		in1 obj=new cls();
		obj.print();
	}
}
