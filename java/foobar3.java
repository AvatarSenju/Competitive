public class foobar3 {
    public static String solution(int[] xs) {
        double res = 1;
        int len = xs.length;
        int count = 0, m = -1001, flag0 = 0, flagp = 0;
        for (int i = 0; i < len; i++) {
            if (xs[i] != 0) {
                flag0 = 1;
                if (xs[i] >= 1) {
                    flagp = 1;
                    res *= xs[i];
                } else {
                    count++;
                    m = xs[i] > m ? xs[i] : m;
                    res *= xs[i];

                }
            }
        }

        if ((len == 1))
            return (Integer.toString(xs[0]));
        if (count > 0 && count % 2 != 0)
            res /= m;
        if (flag0 == 0 || ((flagp == 0) && count == 1))
            return ("0");
        // String ans=Double.toString(res);
        String ans = String.format("%.0f", res);
        // ans=ans.substring(0,ans.indexOf('.'));
        return (ans);

    }

    public static void main(String[] args) {
        // int ar[] = { 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
        // 1000, 1000, 1000, 1000, 1000, 1000,
        // 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
        // 1000, 1000, 1000, 1000,
        // 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
        // 1000, 1000, 1000, 1000 };
        int ar[] = { -2, -2, -2, -3 };
        String res = solution(ar);
        System.out.println(res);
    }
}

// def solution(xs):
// ne=[]
// po=[]
// for i in xs:
// if i>0:
// po.append(i)
// elif i<0:
// ne.append(i)

// if len(xs)==1:
// return str(xs[0])

// if len(ne) % 2 != 0:
// ne.sort()
// ne.pop()

// if po or ne:
// pr = 1
// for x in po:
// pr *= x
// for x in ne:
// pr*=x

// return str(pr)

// return '0'