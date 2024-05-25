import java.util.*;
class info{
	String name,branch;
	double gpa;
	info(String name,String branch,double gpa){
		this.name=name;
		this.branch=branch;
		this.gpa=gpa;
	}
	void display(){
		System.out.print("\nname= "+name+"\nbranch= "+branch+"\nGPA= "+gpa);
	}
}
class test{
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter no of students: ");
		int n=scan.nextInt();
		info data[]=new info[n];
		for(int i=0;i<n;i++){
			data[i]=new info("Anvay","CSE",9.32);
			data[i].display();
		}
	}
	
}
