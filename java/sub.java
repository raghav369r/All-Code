class sub{
	static int count(String str,int l){
		int len=str.length(),c=0;
		for(int i=0;i<=len-l;i++){
			String n=str.substring(i,i+3);
			System.out.println(n);
			char arr[]={'\0','\0','\0'};
			for(int j=0;j<3;j++){
				for(int k=0;k<3 && arr[k]!='\0';k++)
					if()
			}
			
		}
		return c;
	}
	public static void main(String args[]){
		String str="raghav";
		System.out.println("no of sub strings= "+count(str,3));
	}	
}

