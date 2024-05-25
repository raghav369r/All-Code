import java.io.File;
import java.io.IOException;
import java.util.Scanner;
class read{
	public static void main(String args[])throws IOException{
		File file=new File("new.txt");
		Scanner read=new Scanner(file);
		while(read.hasNextLine())
		System.out.print(read.nextLine()+"\n");
		
	}
}
