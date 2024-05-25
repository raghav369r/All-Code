import java.util.*;
class string{
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		String s;
		System.out.print("Enter the string: ");
		s=scan.nextLine();
		int l=s.length(),flag=0;
		for(int i=0;i<l/2;i++)
			if(s.charAt(i)!=s.charAt(l-i-1)) flag=1;
		if(flag==0) System.out.print("it's palindrome");
		else System.out.print("it's not a paliindrome");
	}
}
