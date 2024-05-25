import java.util.*;
class ll{
	public static void main(String a[]){
		LinkedList<String> obj=new LinkedList<String>();
		Scanner scan=new Scanner(System.in);
		int no;
		String str;
		System.out.print("Enter no of elements to add: ");
		no=scan.nextInt();
		for(int i=0;i<no;i++){
			System.out.print("Enter string to add: ");
			str=scan.next();
			obj.add(str);
		}
		Iterator<String> itr=obj.iterator();
		while(itr.hasNext()){
			System.out.println(itr.next());
		}
		System.out.print("Linked List= "+obj);
	}
}
