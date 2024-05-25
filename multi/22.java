class Myrunnable implements Runnable{
public void run()
{
for(int i=0;i<10;i++)
{
System.out.print("child thread\n");
} } }
class test1
{
public static void main(String args[]){
Myrunnable t1=new Myrunnable();
Thread t=new Thread(t1);// t1 is target runnable
t.start();
for(int i=0;i<10;i++)
{
int a=10/0;
System.out.print("main thread\n");
} } }
