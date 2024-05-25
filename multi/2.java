class t extends Thread{
	public void run(){
		for(int i=1;i<6;i++){
			//System.out.println("Thread: "+"\nThread.currentThread(): "+Thread.currentThread());
			System.out.println("thread 1: "+Thread.currentThread().getName());
			//System.out.println(Thread.currentThread().getName());
			//try{this.wait();}catch(Exception e){} 
			try{Thread.sleep(400);}catch(Exception e){} 
		}
	}
}
class t2 extends Thread{
	public void run(){
		for(int i=100;i<110;i++){
			System.out.println("thread 2: "+Thread.currentThread().getName());
			try{this.wait();}catch(Exception e){} 
			//System.out.println(Thread.currentThread().getName());
			try{Thread.sleep(400);}catch(Exception e){} 
		}
	}
}
class test{
	public static void main(String a[]){
		Thread maint=Thread.currentThread();
		maint.setName("Main Thread");
		t t1=new t();
		t2 t3=new t2();
		t3.start();
		t1.start();
		System.out.println("HEY: "+t1.currentThread());
		//try{t3.wait();}catch(Exception e){} 
		//try{t3.join();}catch(Exception e){} 
		System.out.println(t1.isAlive());
		for(int i=10;i<20;i++){
			System.out.println("mainthread: "+Thread.currentThread().getName());
			//System.out.println(Thread.currentThread().getName());
			
			try{Thread.sleep(400);}catch(Exception e){}
			//if(i==19) t3.notify();
		}
		t1.join();
		//System.out.println(maint);
		System.out.println(Thread.currentThread().getName()+" "+Thread.currentThread().isAlive());
		System.out.println(t1.getName()+" "+t1.isAlive());
		System.out.println(t3.getName()+" "+t3.isAlive());
	}
}
