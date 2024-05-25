import java.io.*;
import java.util.*;
class tick{
	public static void main(String a[]){
		try{
			String fname="/home/raghav/Desktop/co_de/java/ticket/08-12-2022.txt";
			File file=new File(fname);
			FileWriter writer=new FileWriter(fname);
			writer.write("Movie:Adipurush\tCast:Prabhas,Kritisanon\tDirector:Oumraut\n");
			//writer.write("Seatno\t\tBookingStatus\t\tPrice\n");
			int price=150;
			for(int i=1;i<=560;i++){
				if(i>280) price=200;
				String data=String.format("%d\t\tno\t\t%d\n",i,price);
				writer.write(data);
			}
			writer.close();
		}
		catch(IOException e){
			System.out.println("File not found!");
			e.printStackTrace();
		}
	}
}
