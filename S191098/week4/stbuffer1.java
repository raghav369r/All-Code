class stbuffer1{
	public static void main(String args[]){
	StringBuffer str=new StringBuffer();//("Raghav Reddy");
	str.append("Raghav Reddy");
	//str.charAt(index)
	//str.length()
	for(int i=0;i<str.length();i++)
		System.out.print(str.charAt(i)+" ");
	//str.substring(index)
	System.out.println(str.substring(7));
	System.out.println(str);
	//str.substring(str,end+1)
	System.out.println(str.substring(7,10));
	}
}
