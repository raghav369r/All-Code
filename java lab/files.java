import java.io.File;
class create{
	public static void main(String a[]){
		File file=new File("new.txt");
		try{
			if(file.createNewFile()){
				System.out.println("New file created name: "+file.getName());
			}
			else 
				System.out.println("File already existed");
			}
		catch(Exception e){
			System.out.println(e);
		}
	}
} 
