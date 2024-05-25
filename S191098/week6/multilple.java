interface in1{
	//void show();
}
interface in2{
	void print();
}
interface in3 extends in1,in2{
	//void king();
}
class cls implements in3{
	public void print(){
		System.out.println("Printing...");
	}
} 
/*
class cls implements in1,in2{
	public void show(){
		System.out.println("Showing...");\
	}
	public void print(){
		System.out.println("Printing...");
	}
}*/
class test{
	public static void main(String a[]){
	cls obj=new cls();
	//obj.king();
	obj.print();
	}
}
