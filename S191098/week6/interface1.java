interface in1{
	void cube(int x);
}
class test implements in1{
	public void cube(int x){
			System.out.println(x*x*x);
		}
	public static void main(String a[]){
		in1 obj=new test(); //test obj=new test(); ==both are accepted
		obj.cube(3);
	}
}
