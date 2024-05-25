import java.util.Scanner;
class order{
	public static void main(String a[]){
		int i,j,num;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter no of elements: ");
		num=scan.nextInt();
		String arr[]=new String[num];
		System.out.print("Enter strings: ");
		for(i=0;i<num;i++)
			arr[i]=scan.next();
		for(i=0;i<num-1;i++){
			for(j=i+1;j<num;j++){
				if(arr[i].compareTo(arr[j])>0){
					String tmp=arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
				}
			}
		}
		System.out.println("after arranging: ");
		for(i=0;i<num;i++) System.out.println(arr[i]);
	}
}
