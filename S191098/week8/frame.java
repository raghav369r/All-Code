import java.awt.*;  
class test{  
	public static void main(String[] args){  
	    Frame f1=new Frame("TITLE OF THE FRAME");  
	    Button b1=new Button("SUBMIT");  
	    Label l1=new Label("Enter ur branch");
	    l1.setBounds(50,50,200,30);
	    b1.setBounds(150,450,80,50);
	    f1.add(b1);
	    f1.add(l1);
	    f1.setSize(500,500);
	   
	    CheckboxGroup ckg = new CheckboxGroup();
	    Checkbox ckbox1 = new Checkbox("CSE",ckg,false);  
	    ckbox1.setBounds(100,100, 60,60);  
	    Checkbox ckbox2 = new Checkbox("ECE",ckg,false);  
	    ckbox2.setBounds(100,150, 60,60);
	    Checkbox ckbox3 = new Checkbox("MECH",ckg,false);  
	    ckbox3.setBounds(100,200, 60,60);
	    Checkbox ckbox4 = new Checkbox("CIVIL",ckg,false);  
	    ckbox4.setBounds(100,250, 60,60);
	    Checkbox ckbox5 = new Checkbox("EEE",ckg,false);  
	    ckbox5.setBounds(100,300, 60,60); 
	    Checkbox ckbox6 = new Checkbox("CHEMICAL",ckg,false);  
	    ckbox6.setBounds(100,350, 100,60);
	    f1.add(ckbox1); 
	    f1.add(ckbox2);
	    f1.add(ckbox3); 
	    f1.add(ckbox4); 
	    f1.add(ckbox5); 
	    f1.add(ckbox6);
	    
	     Label l2=new Label("Enter ur branch");
	     l2.setBounds(250,50,200,30);
	    f1.add(l2);
	    Choice ch=new Choice();
	    ch.setBounds(250,100,120,35);
	    ch.add("CSE");
	    ch.add("ESE");
	    ch.add("CIVIL");
	    ch.add("MECH");
	    ch.add("EEE");
	    ch.add("CHEMICAL");
	    f1.add(ch);
	    f1.setSize(400,400);  
	    f1.setLayout(null);
	    //f1.setLayout(new FlowLayout());  
	    f1.setVisible(true);
	}
}
