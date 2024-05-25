class area{
	int h;
	int w;
	area(){
		h=w=5;
	}
	void tarea(){
		//double area=(((double)h*(double)w)/2);
		System.out.print("area= "+((1.0/2.0)*(double)h*(double)w));
	}
	public static void main(String args[]){
		area x=new area();
		x.tarea();
	}
}
