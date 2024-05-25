import java.util.Scanner;
class table{
	public void print(int n) throws Exception{
		for(int i=0;i<6;i++){
			Thread.sleep(500);
			System.out.println(n+" x "+i+" = "+n*i);
		}
	}
}
class multi extends Thread{
	table ta;
	multi(table t){
		ta=t;
	}
	public void run(){
		ta.print(10);
	}
}
class multi2 extends Thread{
	table ta;
	multi2(table t){
		ta=t;
	}
	public void run(){
		ta.print(100);
	}
}

class test{
	public static void main(String a[])throws Exception{
		table obj=new table();
		multi t1=new multi(obj);
		multi2 t2=new multi2(obj);
		
		t1.start();
		t2.start();
		//t1.obj.print(10);
		//t2.obj.print(100);
	
	}
}
