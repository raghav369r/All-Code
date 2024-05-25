import java.util.*;
class stack{
	class node{
		int data;
		node next=null;
		node(int data){
			this.data=data;
		}
	}
	public node head=null,tail=null;
	void push(int data){
		node newnode=new node(data);
		if(head==null) tail=newnode;
		newnode.next=head;
		head=newnode;
	}
	void pop(){
		if(head==tail) head=tail=null;
		else head=head.next;
	}
	void display(){
		node tmp=head;
		for(;tmp!=null;tmp=tmp.next)
			System.out.print(tmp.data+"-->");
		System.out.println();
	}
}
class test{
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		stack list=new stack();
		int opt,data;
		while(true){
			System.out.print("1..push\n2..pop\n3..display\n4..exit\nEnter ur choice: ");
			opt=scan.nextInt();
			switch(opt){
				case 1:
					System.out.print("Enter data to add: ");
					data=scan.nextInt();
					list.push(data);
					break;
				case 2:
					if(list.head!=null) list.pop();
					else System.out.println("Stack underflow!!");
					break;
				case 3:
					if(list.head!=null) list.display();
					else System.out.println("Stack is empty!!");
					break;
				case 4:
					return;
				default:
					System.out.println("Enter valid choice!!");
					
			}
		}
	}
}
