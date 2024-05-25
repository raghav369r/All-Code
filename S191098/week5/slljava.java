import java.util.*;
class sll{
	class node{
		String data;
		node link=null;
		public node(String data){
		this.data=data;
		}
	}
	public node head=null,tail=null;
	public void addnode(String data){
		node newnode=new node(data);
		if(head==null) head=tail=newnode;
		else{
			tail.link=newnode;
			tail=newnode;
		}
	}
	void display(){
		if(head==null) System.out.println("List is empty!!");
		else{
			node tmp;
			System.out.println("data in the List: ");
			for(tmp=head;tmp!=tail;tmp=tmp.link)
				System.out.print(tmp.data+"-->");
			System.out.println(tmp.data+"-->");
		}
	}
	void delete(String ele){
		node curr=head,old=null;
		for(;curr.data!=ele && curr.link!=null;curr=curr.link){
			System.out.println("data="+curr.data);			
			old=curr;
		}
		if(curr.data!=ele) System.out.println("element not found in list!!");
		else if(curr==head) head=head.link;
		else old.link=curr.link;
	}
	void dellast(){
		if(head==null) System.out.println("No data to delete");
		else{
			node curr=head;
			if(head==tail) head=tail=null;
			for(;curr.link!=tail;curr=curr.link);
			tail=curr;
			tail.link=null;
		}
	}
	void delfirst(){
		if(head==null) System.out.println("No data to delete");
		else head=head.link;
	}
	void delindex(int in){
		node curr=head,old=null;	
		for(int i=0;i!=in;i++,old=curr,curr=curr.link);	
		if(curr==head){
			head=head.link;
			if(tail==curr) tail=null;
		}
		else{
			old.link=curr.link;
			if(curr==tail) tail=old;
		}
	}
	public void addindex(int in,String data){
		node newnode=new node(data);
		node curr=head;
		if(in==0){
			if(head==null) head=tail=newnode;
			else{
				newnode.link=head;
				head=newnode;
			}
		}
		else{
			for(int i=0;i!=in-1;i++,curr=curr.link);
			newnode.link=curr.link;
			curr.link=newnode;
			if(in==0) head=newnode;
			if(curr==tail) tail=newnode;
		}
	}
	public addorder(int ele){
		node newnode =new node(ele);
	}
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		sll ll=new sll();
		int opt,in;
		String data;
		while(true){
			System.out.print("\n1..insert at end\n2..insert by index\n3..display\n4..delete last element\n5..delete first\n6..delete index\n7..insert in order\n8..exit\nenter ur choice: ");
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
					System.out.println("Enter data to add: ");
					data=scan.next();
					ll.addorder(data);
					break;
				case 8:
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
