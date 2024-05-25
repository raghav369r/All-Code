class rev{
	static int in=0;
	static void reverse(String str){
		if(in<str.length()-1){
			in++;
			reverse(str);
			System.out.print(str.charAt(in));
			
		}
		else return;
	}
	public static void main(String a[]){
		reverse("king of the kings");
	}
}

