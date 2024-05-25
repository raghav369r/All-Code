class primepattern{
	public static void main(String args[]){
		int i,j,n=5,check,c,k=2;
		for(i=0;i<n;i++){
		for(c=0;c<=i;){
			check=0;
			for(j=2;j<=k/2;j++) if(k%j==0) check=1;
			if(check==0){
				System.out.print(k+" ");
				c++;
			}
			k++;
		}
		System.out.print("\n");
	}
	}
}
