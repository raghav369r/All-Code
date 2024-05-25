class UnderAgeException extends RuntimeException{
	UnderAgeException(String msg){
		//super(msg);
		System.out.println(msg);
	}
}
class handle4{
	static void printf(int num)throws RuntimeException{
		if(num<18) throw new UnderAgeException("Age should be garater than 18!!");
		else System.out.println("Hey u welcome");	
	}
	public static void main(String a[]){
		try{
			printf(14);
		}
		catch(Exception e){
			e.printStackTrace();
			//System.out.println("SMT went wrong!!\nTry Again");
		}
		finally{
			System.out.println("king..");
		}
		System.out.println("Countinue submiting");
	}
}

