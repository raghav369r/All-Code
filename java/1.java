class cls{
	static void fabi(int a,int b,int n){
		if(a==0) System.out.print("0 1 ");
		if(a+b>n){
			return;
		}
		System.out.print(a+b+" ");
		fabi(b,a+b,n);
	}
	public static void main(String a[]){
		fabi(0,1,17);
	}
}
