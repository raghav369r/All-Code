class pernum{
	public static void main(String args[]){
		int i,dig,num=153,dup,che=0;
		dup=num;
		for(dig=0;dup!=0;dup/=10) dig++;
		dup=num;
		for(;dup!=0;dup/=10){
			che+=Math.pow((dup%10),dig);
		}
		if(che==num) System.out.print(che+" is a perfect number:)");
		else System.out.print(che+" is not a perfect number:(");
	}
}
