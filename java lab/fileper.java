import java.io.File;
class fileper{
	public static void main(String a[]){
		File file=new File("new.txt");
		boolean var=file.exists();
		if(var==true){
			System.out.println("Executable: "+file.canExecute());
			System.out.println("Readable: "+file.canRead());
			System.out.println("Writable: "+file.canWrite());
			System.out.println("Absolutepath: "+file.getAbsolutePath());
			System.out.println("File size in bytes: "+file.length());
		}
		else
			System.out.println("File not found");
	}
}
