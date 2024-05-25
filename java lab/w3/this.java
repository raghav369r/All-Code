class cls{
	int a,b,c,d;
	cls(int a,int b,int c,int d){
		this(c,d);	//invoking constructor
		this.a=a;
		this.b=b;	
	}
	cls(int c,int d){
		System.out.println("Constructor invoked");
		this.c=c;
		this.d=d;	//current class instance variable
	}
	void display(){	//invoking current cls method   getobj() same as this.getobj()
		System.out.println("Entered numbers are: a= "+a+" b= "+b+" c= "+c+" d= "+d);
	}
	cls getobj(){
		return this;		//current cls instance
	}
	public static void main(String a[]){
		new cls(9,4,3,6).getobj().display();
		
	}
}

