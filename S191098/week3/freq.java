import java.util.*;
class freq{
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		String str=scan.nextLine();
		int l=str.length(),i,j,n=0;
		int fre[]=new int[l];
		char ch[]=new char[l];
		for(i=0;i<l;i++){
			fre[i]=0;
			ch[i]='a';
		}
		for(i=0;i<l;i++){
			for(j=0;j<l;j++){ 
			boolean d=(str.charAt(i)==ch[j]);
System.out.println(str.charAt(i)+" "+ch[j]+" "+d);
				if(str.charAt(i)==ch[j]){
					fre[j]++;
					break;	
				}
				else{
					ch[n]=str.charAt(i);
					fre[n++]++;
					break;
				}
			}
		}
		for(i=0;i<l;i++) 
			System.out.println(ch[i]+"= "+fre[i]);
	}
}


