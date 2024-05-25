class car{
	String name,fuel;
	int price,mailage,seats;
	}
class car1{
	public static void main(String args[]){
		car c1=new car();
		car c2=new car();
		c1.name="benzz";
		c1.fuel="gas";
		c1.price=20000000;
		c1.mailage=32;
		c1.seats=4;
		c2.name="audi";
		c2.fuel="disel";
		c2.price=15000000;
		c2.mailage=25;
		c2.seats=4;
		System.out.println("name fueltype price  mailage seats");
		System.out.println(c1.name+"  "+c1.fuel+"  "+c1.price+"  "+c1.mailage+"  "+c1.seats);
		System.out.println(c2.name+"  "+c2.fuel+"  "+c2.price+"  "+c2.mailage+"  "+c2.seats);
	}
}
