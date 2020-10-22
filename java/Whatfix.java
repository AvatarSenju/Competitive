import java.util.*;

class Whatfix {

    int kadane(int[] ar) {
        int n = ar.length;
        int meh = 0;
        int msf = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            int cur = ar[i];
            meh = Math.max(meh + cur, cur);
            msf = Math.max(msf, meh);
        }
        return msf;
    }

    String longestaPalin(String s) {

        int left = 0, right = 0, len = 1;
        int n = s.length();
        if (n <= 0)
            return s;
        // for every char
        for (int i = 0; i < n; i++) {
            int l = i - 1, r = i + 1;
            while (l >= 0 && r < n && s.charAt(l) == s.charAt(r)) {
                l--;
                r++;
            }
            int curLen = r - l + 1;
            if (curLen > len) {
                left = l + 1;
                right = r - 1;
                len = curLen;
            }
            // for every gap
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s.charAt(l) == s.charAt(r)) {
                l--;
                r++;
            }
            curLen = r - l + 1;
            if (curLen > len) {
                left = l + 1;
                right = r - 1;
                len = curLen;
            }

        }
        return s.substring(left, right + 1);
    }

    // mke it logN using the realtion of position
    //binary numbers hackereaerth using fibonacci numbers
    void bin(int k) {
        ArrayList<StringBuilder> A = new ArrayList<>();

        A.add(new StringBuilder("1"));

        for (int i = 0; i < 100; i++) {
            StringBuilder s = A.get(i);

            int n = s.length();
            char c = s.charAt(n - 1);
            if (c == '1') {
                StringBuilder a = new StringBuilder(s);
                a.append("0");
                A.add(a);
            } else {
                StringBuilder a = new StringBuilder(s);
                a.append("0");
                A.add(a);
                a = new StringBuilder(s);
                a.append("1");
                A.add(a);
            }

        }
        System.out.println(A);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Whatfix ob = new Whatfix();
        // int n = sc.nextInt();
        // int[] ar = new int[n];
        // for (int i = 0; i < n; i++)
        // ar[i] = sc.nextInt();
        // int res = ob.kadane(ar);
        // System.out.println(res);

        // String s1 = ob.longestaPalin("babab");
        // String s2 = ob.longestaPalin("cbbc");
        // System.out.println(s1);
        // System.out.println(s2);
        ob.bin(0);

    }
}