#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> st;
// int top;

void push(int val)
{
    int prevMax = INT_MIN;
    if (st.size() > 0)
        prevMax = st.back().second;

    if (prevMax > val)
        st.push_back(make_pair(val, prevMax));
    else
        st.push_back(make_pair(val, val));
    // top++;
}

void pop()
{

    cout << st.back().first << endl;
    st.pop_back();
}
void max()
{
    cout << st.back().second << endl;
}

int main()
{
    push(1);
    push(4);
    max();
    push(5);
    pop();
    push(2);
    max();
    push(3);
}
