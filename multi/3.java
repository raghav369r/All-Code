class display{
	//synchronized void dis(String name){
	void dis(String name){
		for(int i=0;i<5;i++){
			try{wait();}catch(Exception e){}
			try{Thread.sleep(300);}catch(Exception e){}
			System.out.println("HLO "+name);
		}
	}
}
class sync extends Thread{
	display d_method;
	//Thread th;
	String name;
	sync(display d,String n){
		d_method=d;
		name=n;
	}
	public void run(){
		d_method.dis(name);
	}
}
class test{
	public static void main(String a[]){
		display d=new display();
		sync t1=new sync(d,"raghav");
		sync t2=new sync(d,"reddyy");
		t2.start();
		//try{t2.join();}catch(Exception e){}
		t1.start();

	}
}

