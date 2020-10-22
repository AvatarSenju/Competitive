
import java.util.*;

class Library {
    String name, author;
    double pric, r, total_amt;
    int d;

    Library() {
        name = "";
        author = "";
        pric = 0.0;
        r = 0.0;
        total_amt = 0.0;
        d = 0;
    }

    void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name of Book");
        name = sc.nextLine();
        System.out.println("Enter Author's name");
        author = sc.nextLine();
        System.out.println("Enter Cost of Book");
        pric = sc.nextDouble();
        System.out.println("Enter Number of days");
        d = sc.nextInt();
    }

    void compute() {
        d -= 5; // remove days without fine

        if (d <= 0)
            r = 0;
        else if (d <= 5)
            r = 2 * d;
        else if (d <= 10)
            r = 2 * 5 + 3 * (d - 5);
        else
            r = 2 * 5 + 3 * 5 + (5 * (d - 10));

        total_amt = (0.02 * pric * (d + 5)) + r;

    }

    void show() {
        System.out.println("Name: " + name);
        System.out.println("Author: " + author);
        System.out.println("Number of days: " + d);
        System.out.println("Fine: " + r);
        System.out.println("Total amount: " + total_amt);
    }

    public static void main(String[] args) {

        Library ob = new Library();
        ob.accept();
        ob.compute();
        ob.show();
    }

}
