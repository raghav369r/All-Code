class string2{
	public static void main(String a[]){
		String name="Ram Gopal";
		//str.replace(old,new)string
		name=name.replace("Gopal","Lakshman");
		System.out.println(name);
		name="oooooohhhhh-oooooohhhhhhhh";
		//str.replace(old,new)char
		name=name.replace('o','a');
		System.out.println(name);
		//str.split()
		String str="King Of The Kings King Kohli";
		String words[]=str.split(" ");
		for(String w:words) System.out.println(w);
		String str1="king of the kings king kohli";
		//str.split(,num)
		String st[]=str1.split(" ",2);
		System.out.println("Splitting sentance into 2");
		for(String s:st)
			System.out.println(s);
	}
}
