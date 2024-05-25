class cls{
	final int mailage=40;
	cls(int mailage){
		this.mailage=mailage;  //CT error as it is already initialized,works if it is not initialized
	}
	public static void main(String a[]){
		cls obj=new cls(35);
		System.out.println("M= "+obj.mailage);
	}	
}

