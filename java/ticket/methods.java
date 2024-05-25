package methods;
import java.util.*;
import java.io.*;
public class methods{
	public static int avilableseates(String fname){
		try{
			File file=new File(fname);
			Scanner reader=new Scanner(file);
			int i=0;
			while(reader.hasNextLine()){
				String data[]=reader.nextLine().split("\t\t");
				//System.out.println("\ndata[1]= "+data[1]);
				if(data[1].intern()=="no") i++;
			}
			return i;
		}
		catch(FileNotFoundException e){
			e.printStackTrace();
		}
		return -1;
	}
	public static int book(String fname,int seat){
		try{
			File file=new File(fname);
			int i,id=-1,price=150;
			File tmp=new File("tmp.txt");
			Random random=new Random();
			FileWriter writer=new FileWriter("tmp.txt");
			Scanner reader=new Scanner(file);
			for(i=0;reader.hasNextLine();i++){
				String data=reader.nextLine();
				String arr[]=data.split("\t\t");
				if(i==seat && arr[1].intern()=="no"){
					if(i>260) price=200;
					id=random.nextInt();
					id=(id<0)?id*(-1):id;
					data=String.format("%d\t\tyes\t\t%d\t\t%d",seat,price,id);
				}
				writer.write(data);
				writer.write("\n");
			}
			writer.close();
			tmp.renameTo(file);
			reader.close();
			return id;
		}
		catch(IOException e){
			e.printStackTrace();
			return -1;
		}
	}
	public static boolean canceltick(String fname){
		Scanner scan=new Scanner(System.in);
		String id;
		System.out.print("Enter Booking Id: ");
		id=scan.next();
		try{
			File file=new File(fname);
			boolean res=false;
			File tmp=new File("tmp.txt");
			Scanner reader=new Scanner(file);
			FileWriter writer=new FileWriter("tmp.txt");
			while(reader.hasNextLine()){
				String data=reader.nextLine();
				String arr[]=data.split("\t\t");
				if(arr[1].intern()=="yes"){
					System.out.println(id.intern()+" "+arr[3].intern());
					if(id==arr[3].intern()){
					data=String.format("%s\t\t%s\t\t%s",arr[0],"no",arr[2]);
					res=true;
					}
				}
				writer.write(data);
				writer.write("\n");
			}
			writer.close();
			tmp.renameTo(file);
			reader.close();
			return res;
		}
		catch(IOException e){
			return false;
		}
	}
	public static void layout(String fname){
		try{
			File file=new File(fname);
			Scanner reader=new Scanner(file);
			int i,j;
			reader.nextLine();
			for(i=1;i<=20;i++){
				for(j=1;j<=28;j++){
					String arr[]=reader.nextLine().split("\t\t");
					if(arr[1].intern()=="yes") System.out.print("|1|");
					else System.out.print("|0|");
					if(j%7==0) System.out.print("  ");
				}
				System.out.println();
			if(i%10==0) System.out.println();
			}
			reader.close();
		}
		catch(IOException e){
			e.printStackTrace();
		}
	}
}
