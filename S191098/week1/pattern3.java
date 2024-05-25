class pattern3{
	public static void main(String args[]){
		int n=3,j,i;
	for(i=1;i<=n;i++){
		for(j=1;j<2*i;j++) System.out.print("* ");
		System.out.print("\n");
	}
	for(i=n-1;i>0;i--){
		for(j=1;j<2*i;j++) System.out.print("* ");
		System.out.print("\n");
	}
	}
}
