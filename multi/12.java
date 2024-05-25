class cls{
	
}
class test{
	public void finalize(){
		System.out.println("In finalize block");
		//System.out.println(Thread.currentThread().getName()+Thread.currentThread().isDaemon());
	}
	public static void main(String a[]){
		cls obj=new cls();
		obj=null;
		new cls();
		System.gc();
	}

}
