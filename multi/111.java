import java.awt.*;
class Testawt
{
  Testawt()
  {
    Frame fm=new Frame();    //Creating a frame
    Label lb = new Label("king kohli");   //Creating a label
    fm.add(lb);                  //adding label to the frame
    fm.setSize(500, 500);   //setting frame size.
    fm.setVisible(true);     //set frame visibilty true
  }
  public static void main(String args[])
  {
    Testawt ta = new Testawt();
  }
}
