import java.util.*;
class rag{
    String a;
    rag(){
        System.out.print("Enter a string: ");
        Scanner scan=new Scanner(System.in);
        a=scan.nextLine();
    }
}
class scan{
    public static void main(String args[]){
        rag a=new rag();
        System.out.print("string= "+a.a);
    }
}