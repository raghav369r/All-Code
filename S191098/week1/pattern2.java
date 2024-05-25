class pattern2{
	public static void main(String args[]){
		int n=9,i,s,j;
		for(i=0;i<n;i++){
			for(s=0;s<=n-2-i;s++) System.out.print("  ");
			for(j=0;j<=i;j++) System.out.print("* ");
			System.out.print("\n");
		}
	}
}
