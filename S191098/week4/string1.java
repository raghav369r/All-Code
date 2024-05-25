class string1{
	public static void main(String args[]){
		String str="Raghav Reddy",str1="bingo";
		char ch;
		//str.length
		//charAt(index)
		for(int i=0;i<str.length();i++){
			ch=str.charAt(i);
			System.out.print(ch+" ");
		}
		//str.contains(string)
		System.out.println("str.contains():"+str.contains("Raghav"));
		System.out.println(str.contains("Raghav"));
		//str.equals(string)
		System.out.println(str.equals("Raghav Reddy"));
		System.out.println(str.equals("BINGO"));
		//str.equlsIgnoreCase(string)
		System.out.println(str1.equalsIgnoreCase("BINGO"));
		//str.isEmpty()
		System.out.println(str.isEmpty());
		//indexOf(char) 
		System.out.println(str.indexOf('R'));
		//indexOf(char,staring index)
		System.out.println(str.indexOf('R',1));
		//indexOf(string) 
		System.out.println(str.indexOf("Red"));
		//indexOf(char,staring index)
		System.out.println(str.indexOf("Ra",1));
		
	}
}
