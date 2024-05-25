import java.io.*;
class bread{
	public static void main(String a[])throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		/*char ch;
		do{
			System.err.print("ENter char: ");
			ch=(char)br.read();
			System.out.println(ch);
		}
		while(ch!='q');*/
		System.err.print("Enter a string: ");
		String str=br.readLine();
		System.err.print("Hlo "+str);
	}
}
