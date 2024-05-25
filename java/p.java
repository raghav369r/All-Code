import java.util.Scanner;
import java.io.*;
class prog{
	public static void main(String a[])throws  IOException{
		//File file=new File("p.txt");
		FileReader file=new FileReader("p.txt");
		/*Scanner reader=new Scanner(file);
		System.out.println("1st Programme: ");
		for(int i=0;i<5;i++){
			System.out.println(reader.nextLine());
		}
		reader.close();*/
		BufferedReader bf=new BufferedReader(file);
		int op=0,cl=0,i=0;
		char ch;
		while(i<2){
			ch=(char)bf.read();
			System.out.print(ch);
			if(ch=='{') op++;
			if(ch=='}') cl++;
			if(op==cl && op!=0){
				i++;
				op=cl=0;
			} 
			
		}
		bf.close();
		file.close();
	}	
}
