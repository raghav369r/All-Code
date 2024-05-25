class callme{
	synchronized public void call(String a){
		System.out.print("Calling ["+a);
		try{Thread.sleep(1000);}catch(Exception e){}
		System.out.println("]");
	}
}
class thread implements Runnable{
	Thread t;
	String name;
	callme whome;
	thread(callme ta,String n){
		whome=ta;
		t=new Thread(this);
		name=n;
	}
	public void run(){
		whome.call(name);
	}
}
class test10{
	public static void main(String a[]){
		callme c=new callme();
		thread t1=new thread(c,"Raghav");
		thread t2=new thread(c,"Reddy");
		thread t3=new thread(c,"Chinna");
		t1.t.start();
	//	try{t1.t.join();}catch(Exception e){}
		t2.t.start();
	//	try{t2.t.join();}catch(Exception e){}
		t3.t.start();
	}
}
