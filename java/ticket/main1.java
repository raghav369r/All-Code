package main;
import methods.*;
import java.util.*;
class book{
	public static void main(String a[]){
		String fname="/home/raghav/Desktop/co_de/java/ticket/08-12-2022.txt";
		Scanner scan=new Scanner(System.in);
		int opt,seat;
		String bid;
		while(true){
			System.out.print("1..Avaiability\n2..book tickets\n3..cancel ticket\n4..exit\nEnter ur choice: ");
			opt=scan.nextInt();
			switch(opt){
				case 1:
					methods.layout(fname);
					System.out.println("Available no of seats= "+methods.avilableseates(fname));
					break;
				case 2:
					methods.layout(fname);
					System.out.print("Enter seat no to book: ");
					seat=scan.nextInt();
					int id=methods.book(fname,seat);
					if(id!=-1)
						System.out.println("Booking Successfull\nSeat number: "+seat+"\nBooking ID: "+id);
					else
					System.out.println("Seat Already Booked or Seat doesnot exist\nBooking Unsuccessfull!");
					break;
				case 3:
					//System.out.println("Enter Booking Id: ");
					//bid=scan.next();
					if(methods.canceltick(fname))
						System.out.println("Ticket Cancelation Successfull");
					else
						System.out.println("Ticket Cancelation Unsuccessfull\nThe Booking ID is incorrect!!");
					break;
				case 4:
					return;
				default:
					System.out.println("Enter Valid Option!!");
			}
		}
	}
}
