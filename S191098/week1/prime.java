class prime{
	public static void main(String args[]){
		int num=7,check=0,i,j;
		for(j=2;j<=7/2;j++) if(num%j==0) check=1;
		if(check==0) System.out.print(num+" is a prime number");
		else System.out.print(num+" is not a prime number");
	}
}
