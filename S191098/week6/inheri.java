class bicycle{
	int speed,gear;
	bicycle(int spee,int ge){
		speed=spee;
		gear=ge;
	}
	void accelarete(int acc){
		speed+=acc;
	}
	void breaks(int dee){
		speed-=dee;
	}
	void changegear(int g){
		gear+=g;
	}
	String data(){
		return("gear= "+gear+"\nspeed= "+speed);
	}
}
class bike extends bicycle{
	String fuel;
	bike(int spee,int gea,String fue){
		//speed=spee;
		//gear=gea;
		super(spee,gea);       //using super to use parent constructor
		fuel=fue;
	}
	String data(){
		return(super.data()+"\nfuel= "+fuel);   //using super to access method in parent 
	}
}
class test{
	public static void main(String a[]){
		bike honda=new bike(46,3,"petrol");
		System.out.println(honda.data());
	}
}
