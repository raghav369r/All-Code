class string3{
	public static void main(String args[]){
		//str.intern() returns string
		String s1=new String("hello");
		String s2="hello";
		String s3=s1.intern();
		System.out.println(s1==s2);
		System.out.println(s2==s3);//reference variables are pointing to same address
		System.out.println(s3==s1);
		//toLowerCase()
		String str1="RaGhaAv";
		System.out.println(str1.toLowerCase());
		//toUpperCase()
		System.out.println(str1.toUpperCase());
		String str2="  spaces  ";
		//str1.trim()
		System.out.println(str2.trim());
		//String.valueOf(any type)
		System.out.println(String.valueOf(10.09)+10);
		char[] ch={'a','b','c','d'};
		String st=String.valueOf(ch);
		System.out.println(st);
		
	}
}
