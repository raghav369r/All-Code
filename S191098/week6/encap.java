class info{
	private String name;
	private int salary;
	public void setname(String name){
		this.name=name;
	}
	public void setsalary(int salary){
		this.salary=salary;
	}
	public String getname(){
		return name;
	}
	public int getsalary(){
		return salary;
	}
}
class test{
	public static void main(String a[]){
		info em1=new info();
		em1.setname("anvay");
		em1.setsalary(155000);
		System.out.println("name= "+em1.getname()+"\nsalary= "+em1.getsalary());
	}
}
