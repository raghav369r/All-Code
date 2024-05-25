import java.util.Scanner;
class sub{
	static boolean checksub(String str,String sub){
		int l1=str.length(),l2=sub.length(),i,j;
		if(l2>l1) return false;
		try{
			for(i=0;i<l1;i++){
				if(str.charAt(i)==sub.charAt(0)){
					int check=1;
					for(j=1;j<l2;j++){
						if(str.charAt(i+j)!=sub.charAt(j)) break;
							check++;
					}
					if(check==l2) return true;
				}
			}
		}
		catch(Exception e){
			return false;
		}
		return false;
	}
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter string: ");
		String str=scan.next();
		System.out.print("Enter sub string to check: ");
		String sub=scan.next();
		if(checksub(str,sub))
			System.out.println("it is a substring");
		else
			System.out.println("it is not a substring");
		
	}
}
