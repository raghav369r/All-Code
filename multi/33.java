class test3 extends Thread{
public void run(){
System.out.println("running thread name is: "+Thread.currentThread().getName());
System.out.println("running thread priority is: "+Thread.currentThread().getPriority());
}
public static void main(String args[]){
test3 m1=new test3();
test3 m2=new test3();
m1.setPriority(Thread.MIN_PRIORITY);
m2.setPriority(Thread.MAX_PRIORITY);
m1.start();
m2.start();
System.out.println("In main");
m2.setPriority(Thread.NORM_PRIORITY);
} }
