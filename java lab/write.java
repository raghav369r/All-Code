import java.io.*;
class write{
	public static void main(String a[])throws IOException{
		FileWriter writer=new FileWriter("new.txt",true);
		writer.write("New text added :)\n");
		writer.close();
	}
}
