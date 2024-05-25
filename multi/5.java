class q{
	int n;
	boolean val=false;
	synchronized public void put(){
		if(val)
			try{wait();}catch(Exception e){}
		System.out.println("put: "+(++n));
		try{Thread.sleep(500);}catch(Exception e){}
		val=true;
		notify();
		//try{Thread.sleep(500);}catch(Exception e){}
	}
	
	synchronized public int get(){
		if(!val)
			try{wait();}catch(Exception e){}
		System.out.println("get: "+n);
		try{Thread.sleep(500);}catch(Exception e){}
		val=false;
		notify();
		return n;
	}
}
class prod implements Runnable{
	Thread t; 
	q cls;
	prod(q cls){
		this.cls=cls;
		t=new Thread(this);
		t.start();
	}
	public void run(){
		while(true){
			//cls.n++;
			if(cls.n>10) break;
			cls.put();
		}
	}
}
class cons implements Runnable{
	Thread t; 
	q cls;
	cons(q cls){
		this.cls=cls;
		t=new Thread(this);
		t.start();
	}
	synchronized public void run(){
		while(true){
			//cls.n++;
			if(cls.n>10) break;
			cls.get();
		}
	}
}
class test11{
	public static void main(String a[]){
		q cls=new q();
		prod t1=new prod(cls);
		cons t2=new cons(cls);
		//t1.t.start();
		//t2.t.start();
	}
	
}
