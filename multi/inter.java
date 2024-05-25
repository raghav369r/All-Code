import java.util.Scanner;
class func{
	String s;
	int val=0;
	volatile int run=1;
	synchronized void put(){
		if(val==1) try{wait();}catch(Exception e){}
		Scanner scan=new Scanner(System.in);
		//System.out.println("= "+Thread.currentThread().getName());
		System.out.print("Enter name: ");
		s=scan.next();
		if(s.equals("stop")){
			run=0;
			notify();
			Thread.currentThread().stop();
		}
		val=1;
		notify();
		
	} 
	synchronized void get(){
		if(run==0) Thread.currentThread().stop();
		if(val==0) try{wait();}catch(Exception e){}
		System.out.println("Hii "+s);
		val=0;
		notify();
	}
}
class thread1 implements Runnable{
	func obj;
	String name;
	thread1(func ob,String str){
		obj=ob;
		name=str;
	}
	public void run(){
		while(true){
			obj.put();
		}
	}
}
class thread2 implements Runnable{
	func obj;
	String name;
	thread2(func ob,String str){
		obj=ob;
		name=str;
	}
	public void run(){
		while(true){
			//try{Thread.sleep(1000);}catch(Exception e){}
			obj.get();
		}
	}
}
class test{
	public static void main(String args[]){
		func f=new func();
		thread1 t11=new thread1(f,"raghav");
		thread2 t22=new thread2(f,"reddy");
		Thread t1=new Thread(t11);
		Thread t2=new Thread(t22);
		t1.start();
		t2.start();
		try{t2.join();}catch(Exception e){}
		System.out.println("Terminating in: ");
		for(int i=5;i>0;i--){
			try{Thread.sleep(500);}catch(Exception e){}
			System.out.println(i);
		}
		System.out.println("Termination sucessfull");
		
		//try{Thread.sleep(10000);}catch(Exception e){}
		//System.out.println("is t1= "+t1.isAlive());
		//System.out.println("is t2= "+t2.isAlive());
	}
}
