class factors{
	void facto(int num){
		System.out.println("factors of "+num);
		int i;
		for(i=1;i<=num;i++) if (num%i==0) System.out.println(i);
		
		
	}
}
class test1{
	public static void main(String args[]){
		factors a=new factors();
		a.facto(6);
	}
}
