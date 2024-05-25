class string4{
	public static void main(String a[]){
		String name="Gopal";
		int age=23;
		//String.format()
		String data=String.format("He is %s and %d year old",name,age);
		System.out.println(data);
		String data1=String.format("he is %s and his GPA= %.3f ",name,9.7890566);
		System.out.println(data1);
		data=String.format("|%-10d| |% d| |%010d| |%10d|",98,98,98,98);
		System.out.println(data);
		//substring 
		String str="Raghav Reddy";
		System.out.println(str.substring(3));
		System.out.println(str.substring(3,9));
		//join
		String date=String.join(":","08","12","2004");
		System.out.println(date);
		//concatinate
		String s1="Raghav ";
		s1=s1.concat("Reddy");
		System.out.println(s1);
		//concatinating multiple strings
		s1=s1.concat(name.concat(s1));
		System.out.println(s1);
		s1="india is my ".concat("country");
		
		
		
	}
}
