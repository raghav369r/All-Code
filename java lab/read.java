import java.io.*;
class read{
	public static void main(String a[])throws IOException{
		FileReader reader=new FileReader("new.txt");
		int ch=reader.read(),nowords=0,nolines=0;
		while(ch!=-1){
			if(ch==' '||ch=='\n') nowords++;
			if(ch=='\n') nolines++;
			System.out.print((char)ch);
			ch=reader.read();
		}
		reader.close();
		System.out.println("Number of words in the file= "+nowords);
		System.out.println("Number of lines in the file= "+nolines);
	}
}
