import java.io.*;
import java.util.*;
class tick{
	public static void main(String a[]){
		try{
			File file=new File("/home/raghav/Desktop/co_de/java/ticket/new.txt");
			
			FileWriter writer=new FileWriter("/home/raghav/Desktop/co_de/java/ticket/new.txt");
			//writer.write("3\treddy\n");
			writer.close();
			Scanner scan=new Scanner(file);
			while(scan.hasNextLine()){
				String data=scan.nextLine();
				String arr[]=data.split("\t");
				System.out.println(arr[0]+"."+arr[1]);
			}
			scan.close();
			File fn=new File("new.txt");
			file.renameTo(fn);
		}
		catch(IOException e){
			System.out.println("File not found!");
			e.printStackTrace();
		}	
	}
}
