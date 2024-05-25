class primeatob{
	public static void main(String args[]){
		int a=5,b=39,i,j,check;
		System.out.println("prime num b/w "+a+" to "+b+" :");
		for(i=5;i<=39;i++){
			check=0;
			for(j=2;j<=i/2;j++) if(i%j==0) check=1;
			if(check==0) System.out.println(i);
		}
	} 
}
