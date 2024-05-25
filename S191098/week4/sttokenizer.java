import java.util.*;
class tokenizer{
	public static void main(String args[]){
		StringTokenizer str=new StringTokenizer("king of the kings"," ",true);
		//str.hasMoreTokens()
		//str.nextToken()
		//str.countTokens()
		System.out.println("no of tokens= "+str.countTokens());
		while(str.hasMoreTokens()){
			System.out.println(str.nextToken());
		}
		StringTokenizer str1=new StringTokenizer("king of the kings");
		System.out.println("no of tokens= "+str1.countTokens());
		while(str1.hasMoreElements())
			System.out.println(str1.nextElement());
	}
}
