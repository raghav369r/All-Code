import java.io.PrintWriter;
class pwrite{
	public static void main(String a[]){
		PrintWriter pw=new PrintWriter(System.out,true);
		pw.print("1st\n");
		pw.println("2nd\n");
		//pw.flush();
	}
}
