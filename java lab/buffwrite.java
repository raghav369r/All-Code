import java.io.*;
class bwriter{
	public static void main(String a[])throws IOException{
		FileWriter file=new FileWriter("new.txt");
		BufferedWriter bw=new BufferedWriter(file);
		bw.write("King Of The Kings");
		bw.close();
		file.close();
	}
}
