import java.util.Scanner;

class prac
{
String name;
    Scanner SC=new Scanner(System.in);
    void getdata()
    {
        System.out.println("Enter your name=  ");
        SC.next(name);
    }

    void display()
    {
        System.out.println(name);
    }

    public static void main(String[] args)
    {
        prac a=new prac();
        a.getdata();
        a.display();

    }
}