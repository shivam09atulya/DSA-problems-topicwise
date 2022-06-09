package shivamatulya;

import java.*;

public class preorder{

    protected int data=5;
    public static void main(String args[])
    {
        System.out.print("Hello how you doing");
    }
}

class Hello extends preorder{

    public static void something(int data)
    {
        System.out.print("Here you are"+data);
    }

}

class Now{

    Hello lala=new Hello();
    something(4);
}