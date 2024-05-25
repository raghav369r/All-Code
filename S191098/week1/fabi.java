class fabinocii{
	public static void main(String args[]){
		int a=0,b=1,c=1,i;
		System.out.println("First 10 numbers of fabinocii series: ");
		System.out.print(a+"  "+b);
		for(i=3;i<=10;i++){
			a=b;
			b=c;
			c=a+b;
			System.out.print("  "+c);
		}
	}
}
