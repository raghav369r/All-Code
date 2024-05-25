public class info{
	private String name,branch,college;
	private double gpa;
	public void setname(String name){
		this.name=name;
	}
	public void setbranch(String branch){
		this.branch=branch;
	}
	public void setclg(String clg){
		college=clg;
	}
	public void setgpa(double gpa){
		this.gpa=gpa;
	}
	public String getname(){
		return name;
	}
	public String getbranch(){
		return branch;
	}
	public String getclg(){
		return college;
	}
	public double getgpa(){
		return gpa;
	}
}
class test{
	public static void main(String a[]){
		info s1=new info();
		s1.setname("Virat18");
		s1.setclg("MIT");
		s1.setbranch("AI");
		s1.setgpa(8.29);
		System.out.println(s1.getname()+"  "+s1.getclg()+"  "+s1.getbranch()+"  "+s1.getgpa());
	}
}
