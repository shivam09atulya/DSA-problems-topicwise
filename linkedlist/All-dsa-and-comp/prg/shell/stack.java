

public class stack {
    static int array[] = new int[10];
    static int top = -1;

    static void push(int x) {
        top++;
        array[top] = x;

    }

    static int pop() {
        System.out.println("Element " + array[top] + " poped");
        top--;
        return array[top];
    }

    static void display() {
        int i = 0;
        for (i = 0; i <= top; i++) {
            System.out.println(array[i]);
        }
    }

    static void top() {
        System.out.println("Element on the top is " + array[top]);
    }

    static void empty() {
        if (top == -1) {
            System.out.println("Stack is Empty");
        } else {
            System.out.println("Stack is not Empty");
        }
    }

    public static void main(String[] args) {

        push(1);
        push(2);
        push(3);
        push(4);
        push(5);
        push(6);
        push(7);
        push(8);
        push(9);
        push(10);
        pop();
        display();
        top();
        empty();
    }
}
