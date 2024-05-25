import java.util.*;
class sllint{
	class node{
		int data;
		node link=null;
		public node(int data){
		this.data=data;
		}
	}
	public void finalize(){
		System.out.println("Element deleted");
	}
	public node head=null,tail=null;
	public void addnode(int data){
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
			for(tmp=head;tmp!=null;tmp=tmp.link)
				System.out.print(tmp.data+"-->");
			//System.out.println(tmp.data+"-->");
		}
	}
	void delete(int ele){
		node curr=head,old=null;
		if(head==null){
			System.out.println("list is empty!");
			return;
		}
		for(;curr.data!=ele && curr.link!=null;curr=curr.link){
			System.out.println("data="+curr.data);			
			old=curr;
		}
		if(curr.data!=ele) System.out.println("element not found in list!!");
		else if(curr==head) head=head.link;
		else{
			old.link=curr.link;
			if(curr==tail) tail=old;
		}
	}
	void dellast(){
		if(head==null) System.out.println("No data to delete");
		else{
			node curr=head,tmp;
			if(head==tail) head=tail=null;
			for(;curr.link!=tail;curr=curr.link);
			tmp=tail;
			tmp=null;
			tail=curr;
			tail.link=null;
			System.gc();
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
	public void addindex(int in,int data){
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
	public void addorder(int ele){
		node newnode =new node(ele);
	}
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		sllint ll=new sllint();
		int opt,in;
		int data;
		while(true){
			System.out.print("\n1..insert at end\n2..insert by index\n3..display\n4..delete last element\n5..delete first\n6..delete index\n7..delete element\n8..exit\nenter ur choice: ");
		opt=scan.nextInt();
			switch(opt){
				case 1:
					System.out.println("Enter data to add: ");
					data=scan.nextInt();
					ll.addnode(data);
					break;
				case 2:
					System.out.print("Enter index to insert: ");
					in=scan.nextInt();
					System.out.print("Enter data to insert: ");
					data=scan.nextInt();
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
					System.out.println("Enter data to delete: ");
					data=scan.nextInt();
					ll.delete(data);
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
