import java.util.*;

class Eqprod {
    void findMin(long array[]) {

        int n = array.length;

        for (int i = 0; i < n; i++)
            System.out.println(array[i]);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Eqprod ob = new Eqprod();
        int n = sc.nextInt();
        long[] array = new long[n];
        for (int i = 0; i < n; i++)
            array[i] = sc.nextLong();
        ob.findMin(array);
        sc.close();
    }
}