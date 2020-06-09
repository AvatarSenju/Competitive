#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {

        string a = "", b = "", str = "";
        int l = 0;
        cin >> l;
        cin >> str;
        int flag = 0;

        for (int i = 0; i < l; i++)
        {
            char ch = str[i];
            if (flag == 1)
            {
                a.append("0");
                b.append(1, ch);
            }
            else if (ch == '1')
            {
                flag = 1;
                a.append("1");
                b.append("0");
            }
            else
            {
                if (ch == '2')
                {
                    a.append("1");
                    b.append("1");
                }
                else
                {
                    a.append("0");
                    b.append("0");
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }

    return 0;
}