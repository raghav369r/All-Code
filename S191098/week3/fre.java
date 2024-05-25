import java.util.*;
class fre{
	public static void main(String args[]){
		int arr[]=new int[26];
		Scanner scan=new Scanner(System.in);
		int i,j,frq;
		for(i=0;i<26;i++) arr[i]=0;
		System.out.print("Enter a string: ");
		String str=scan.nextLine();
		for(i=0;i<str.length();i++){
			 frq=str.charAt(i)-'a';
			 arr[frq]++;
		}
		for(i=0;i<26 && arr[i]!=0;i++) {
			j=i+'a';
			char f=(char)j;
			System.out.println(f+" = "+arr[i]);
		}
	}
}
