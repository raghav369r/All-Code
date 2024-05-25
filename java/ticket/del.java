import java.io.*;
import java.util.*;
class del{
	public static void main(String A[]){
		try{
			File file=new File("new.txt");
			File out=new File("out.txt");
			Scanner read=new Scanner(file);
			FileWriter write=new FileWriter("out.txt");
			for(int i=1;read.hasNextLine();i++){
				String data=read.nextLine();
				String d[]=data.split("\t");
				System.out.println("\nd[0]= "+d[0]+"\nd[1]= "+d[1]);
				if(d[1].intern()=="first")
				//if(i==1)
					write.write("5\tILY");
				else
					write.write(data);
				write.write("\n");
			}
			write.close();
			read.close();
			out.renameTo(file);
		}
		catch(IOException e){
			System.out.println("smt went wrong");
			e.printStackTrace();
		}
	}
}
