abstract class shape{
	abstract void draw(); 
}
class rectangle extends shape{
	void draw(){
		System.out.println("Drawing rectangle!");
	}
}
class square extends shape{
	void draw(){
		System.out.println("Drawing square!");
	}
}
class test{
	public static void main(String a[]){
		rectangle s1=new rectangle();
		s1.draw();
		shape s2=new square();
		s2.draw();
	}
}
