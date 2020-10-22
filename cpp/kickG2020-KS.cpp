#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i, a, b) for (i = a; i < b; i++)
#define repr(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define p_b push_back
#define m_p make_pair
#define all(a) (a).begin(), (a).end()

// void computeLPSArray(char *pat, int M, int *lps);
void computeLPSArray(string pat, int M, vector<int> &lps);

// Prints occurrences of txt[] in pat[]
void KMPSearch(string pat, string txt, vector<int> &ind)
{
    int M = pat.length();
    int N = txt.length();

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    vector<int> lps(M, 0);

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            ind.push_back(i - j);
            j = lps[j - 1];
        }

        // mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(string pat, int M, vector<int> &lps)
{
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0)
            {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

ll solve()
{
    string s;
    cin >> s;
    int n = s.length();
    ll res = 0;

    vector<int> k;
    vector<int> st;
    KMPSearch("KICK", s, k);
    KMPSearch("START", s, st);
    // for (auto i : k)
    //     cout << i << " ";
    // cout << "\n";
    int kl = k.size();
    int sl = st.size();
    int i = 0, j = 0;

    for (int i = 0; i < kl; i++)
    {
        if (j >= sl)
            break;
        if (k[i] < st[j])
            res = res + (sl - j);
        else
        {
            j++;
            i--;
        }
    }
    return res;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll res = solve();
        cout << "Case  #" << i << ": " << res << "\n";
    }

    return 0;
}