class student{
	int id;
	String name;
	void insert(int i,String n){
	id=i;
	name=n;
	}
	void display(){
	System.out.println(id+" "+name);
	}
}
class insertdisplay{
	public static void main(String args[]){
		student s1=new student();
		student s2=new student();
		s1.insert(1098,"Raghav");
		s2.insert(1099,"Reddy");
		s1.display();
		s2.display();
	}
}

