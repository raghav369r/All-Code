import java.util.*;
class dcll{
	class node{
		String data;
		node next=null;
		node prev=null;
		public node(String data){
		this.data=data;
		}
		public void finalize(){
			System.out.println("\nDeleted one object");
		}
	}
	public node head=null,tail=null;
	public void addnode(String data){
		node newnode=new node(data);
		if(head==null){
			head=tail=newnode;
			newnode.next=head;
			newnode.prev=head;
		}
		else{	
			newnode.prev=tail;
			tail.next=newnode;
			tail=newnode;
			tail.next=head;
			head.prev=tail;
		}
	}
	void display(){
		if(head==null) System.out.println("List is empty!!");
		else{
			int i=0;
			node tmp=head;
			System.out.println("data in the List: ");
			do{
				System.out.print(tmp.data+"-->");
				tmp=tmp.next;
				if(tmp==head) System.out.println("==="+(++i));
			}
			while(i<2);
			i=0;
			tmp=tail;
			do{
				System.out.print(tmp.data+"-->");
				tmp=tmp.prev;
				if(tmp==tail) System.out.println("==="+(++i));
			}
			while(i<2);
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
				tail.prev.next=head;
				tail=tail.prev;
				head.prev=tail;
			}
		}
		System.gc();
	}
	void delfirst(){
		if(head==null) System.out.println("No data to delete");
		else{
			if(head==tail) head=tail=null;
			else{
				head=head.next;
				head.prev=tail;
				tail.next=head;
			}
		}
		System.gc();
	}
	void delindex(int in){
		node curr=head,old=null;	
		for(int i=0;i!=in;i++,old=curr,curr=curr.next);	
		if(curr==head){
			if(tail==curr) tail=head=null;
			else{
				head=head.next;
				head.prev=tail;
				tail.next=head;
			}
		}
		else{
			if(curr==tail){
				tail=old;
				tail.next=head;
				head.prev=tail;
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
			if(head==null)
				head=tail=newnode.next=newnode.prev=newnode;
			else{
				head.prev=newnode;
				newnode.next=head;
				head=newnode;
				head.prev=tail;
				tail.next=head;
			}
		}
		else{
			for(int i=0;i!=in-1;i++,curr=curr.next);
			newnode.next=curr.next;
			newnode.prev=curr;
			curr.next.prev=newnode;
			curr.next=newnode;
			if(curr==tail){
				tail=newnode;
				head.prev=tail;
			}
		}
	}
	public int count(){
		int no=0;
		if(head!=null) no++;
		for(node tmp=head;tmp!=tail;tmp=tmp.next,no++);
		return no;
	}
	public static void main(String a[]){
		Scanner scan=new Scanner(System.in);
		dcll ll=new dcll();
		int opt,in;
		String data;
		while(true){
			System.out.print("\n1..insert at end\n2..insert by index\n3..display\n4..delete last element\n5..delete first\n6..delete index\n7..no of elements\n8..exit\nenter ur choice: ");
		opt=scan.nextInt();
			switch(opt){
				case 1:
					System.out.print("Enter data to add: ");
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
					System.out.println("No of elements are: "+ll.count());
					break;
				case 8:
					return;
			}
		}
	}
}
