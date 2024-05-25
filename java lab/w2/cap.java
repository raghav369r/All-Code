class cap{
	public static void main(String a[]){
		StringBuffer str=new StringBuffer("king of the kings");
		char c;
		for(int i=0;i<str.length();i++){
			if((i==0 || str.charAt(i-1)==' ')){
				c=str.charAt(i);
				c=Character.toUpperCase(c);
				String s=String.valueOf(c);
				str.replace(i,i+1,s);
			}
				
		}
		System.out.println(str);
	}
}
