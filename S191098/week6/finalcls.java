final class parent{
	int print(){
		return 0;
	}
}
class child extends parent{        //C.T error
	int print(){
		return 1;
	}
}
class test{
	public static void main(String a[]){
		child obj=new child();
		obj.print();
	}
}
