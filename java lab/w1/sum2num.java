import java.util.Scanner;
class test{
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		int num,i,j,k,l,sum;
		System.out.print("Enter no to check: ");
		num=scan.nextInt();
		for(i=2;i<num;i++){
			int check1=0;
			for(j=2;j<=i/2;j++){
				if(i%j==0) check1=1; 
			}
			if(check1==0){
				for(k=2;k<num;k++){
					int check2=0;
					for(l=2;l<=k/2;l++)
						if(k%l==0) check2=1;
					if(check2==0 && (i+k)==num){
						System.out.println(i+" + "+k+" = "+num);
						return;
					}
				}
			}
		}
		System.out.println("Can't expressed as sun of two numbers!!");
	}
}
