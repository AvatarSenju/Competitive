public class foobar2 {
    public static String solution(long x, long y) {
        // Your code here
        long s = 0;
        if (y == 1)
            s = y;
        else {
            long a = y - 1;
            long n = a * (a + 1) / 2;
            s = n + 1;

        }
        long l = y + x - 1;
        if (x == 1)
            return (Long.toString(s));
        long t = l * (l + 1) / 2;
        // x--;
        long m = y * (y + 1) / 2;
        t = t - m;
        t = t + s;

        return (Long.toString(t));
    }

    public static void main(String[] args) {
        String res = solution(5, 10);
        System.out.println(res);
    }
}