/*class box{
	double height;
	double width;
	double depth;
	box(double h,double w,double d){
		height=h;
		width=w;
		depth=d;
	}
	void compute(){
		System.out.println("volume= "+(height*width*depth));
	}
}
class testbox{
	public static void main(String args[]){
		box b1=new box(11.1,22.2,33.3);
		box b2=new box(11.1,22.2,33.3);
		b2.compute();
	}
}*/
class states{
	String name;
	int jno,hscore;
	float avg,strrate;
	states(String n,int jn,int h,float avg,float sr){
		name=n;
		jno=jn;
		hscore=h;
		avg=avg:
		strrate=sr;
	}
	void display(){
		System.out,print("name ="+name+"\njersy no: "+jno+"\nhigh score: "+hscore+"\naverage: "+avg+"\nstrik rate: "+strrate);
	}
}
class virat{
	states virat=new states("King Kohli",18,183,62.9,103.67); 
	virat.display();
} 
