#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    int carry = 0;
    int lena, lenb;
    lena = a.length();
    lenb = b.length();

    if (lena > lenb)
    {
        while (lena > lenb)
        {
            b = '0' + b;
            lenb++;
        }
    }
    else
    {
        while (lena < lenb)
        {
            a = '0' + a;
            lena++;
        }
    }

    vector<string> res(lena + 1);
    int n = res.size();
    for (int i = lena - 1; i >= 0; i--)
    {
        int x = a[i] - 48;
        int y = b[i] - 48;
        int z = (x + y + carry) % 10;
        carry = (x + y + carry) / 10;
        res[i + 1] = to_string(z);
    }
    res[0] = to_string(carry);
    for (auto i : res)
        cout << i;
    cout << endl;
}