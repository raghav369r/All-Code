class a{
	public static void layout(){
			int i,j;
			for(i=1;i<=30;i++){
				for(j=1;j<=25;j++){
					System.out.print("|0|");
					if(j%5==0) System.out.print("  ");
				}
				System.out.println();
			if(i%5==0) System.out.println();
			}
	}
	public static void main(String a[]){
		layout();
	}
}
