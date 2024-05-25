class box{
    double length;
    double width;
    double height;
    box(){
        length=10.9;
        width=9.8;
        height=8.2;
    }
    box(double l){
        length=width=height=l;
    }
    box(double l,double w,double h){
        length=l;
        width=w;
        height=h;
    }
    double vol(){
        return length*width*height;
    }
    public static void main(String args[]) {
        box b1=new box();
        box b2=new box(9.087);
        box b3=new box(8.7,7.6,5.4);
        System.out.println("zoro arg constructer: "+b1.vol());
        System.out.println("one arg constructer: "+b2.vol());
        System.out.println("three arg constructer: "+b3.vol());
        
    }
}
