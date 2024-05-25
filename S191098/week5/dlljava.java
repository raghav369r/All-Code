import java.util.*;
class dll{
	class node{
		String data;
		node next=null;
		node prev=null;
		public node(String data){
		this.data=data;
		}
		public void finalize(){
			System.out.println("Deleted one object");
		}
	}
	public node head=null,tail=null;
	public void addnode(String data){
		node newnode=new node(data);
		if(head==null)
			head=tail=newnode;
		else{	
			newnode.prev=tail;
			tail.next=newnode;
			tail=newnode;
		}
	}
	void display(){
		if(head==null) System.out.println("List is empty!!");
		else{
			node tmp;
			for(tmp=head;tmp!=null;tmp=tmp.next)
				System.out.print(tmp.data+"-->");
			System.out.println();
			for(tmp=tail;tmp!=null;tmp=tmp.prev)
				System.out.print(tmp.data+"-->");
			System.out.println();
		}
	}
	void delete(String ele){
		node curr=head,old=null;
		for(;curr.data!=ele && curr.next!=null;curr=curr.next){
			System.out.println("data="+curr.data);			
			old=curr;
		}
		if(curr.data!=ele) System.out.println("element not found in list!!");
		else if(curr==head) head=head.next;
		else old.next=curr.next;
		System.gc();
	}
	void dellast(){
		if(head==null) System.out.println("No data to delete");
		else{
			if(head==tail) head=tail=null;
			else{
				tail.prev.next=null;
				tail=tail.prev;
			}
		}
		System.gc();
	}
	void delfirst(){
		if(head==null) System.out.println("No data to delete");
		else{
			head=head.next;
			head.prev=null;
		}
		System.gc();
	}
	void delindex(int in){
		node curr=head,old=null;	
		for(int i=0;i!=in;i++,old=curr,curr=curr.next);	
		if(curr==head){
			head=head.next;
			head.prev=null;
			if(tail==curr) tail=null;
		}
		else{
			if(curr==tail){
				tail=old;
				tail.next=null;
			}
			else{
				old.next=curr.next;
				curr.next.prev=old;
			}
		}
		System.gc();
	}
	public void addindex(int in,String data){
		node newnode=new node(data);
		node curr=head;
		if(in==0){
			if(head==null) head=tail=newnode;
			else{
				head.prev=newnode;
				newnode.next=head;
				head=newnode;
			}
		}
		else{
			for(int i=0;i!=in-1;i++,curr=curr.next);
			newnode.next=curr.next;
			newnode.prev=curr;
			curr.next.prev=newnode;
			curr.next=newnode;
			if(curr==tail) tail=newnode;
		}
	}
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		dll ll=new dll();
		int opt,in;
		String data;
		while(true){
			System.out.print("\n1..insert at end\n2..insert by index\n3..display\n4..delete last element\n5..delete first\n6..delete index\n7..exit\nenter ur choice: ");
		opt=scan.nextInt();
			switch(opt){
				case 1:
					System.out.println("Enter data to add: ");
					data=scan.next();
					ll.addnode(data);
					break;
				case 2:
					System.out.print("Enter index to insert: ");
					in=scan.nextInt();
					System.out.print("Enter data to insert: ");
					data=scan.next();
					ll.addindex(in,data);
					break;
				case 3:
					ll.display();
					break;
				case 4:
					ll.dellast();
					break;
				case 5:
					ll.delfirst();
					break;	
				case 6:
					System.out.print("Enter index to delete: ");
					in=scan.nextInt();
					ll.delindex(in);
					break;	
				case 7:
					return;
			}
		}
		/*linkedlist ll=new linkedlist();
		ll.addnode("raghav");
		ll.addnode("reddy");
		ll.addnode("king");
		ll.addnode("kohli");
		ll.addnode("virat");
		ll.display();*/
	}
}
