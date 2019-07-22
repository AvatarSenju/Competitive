#include <bits/stdc++.h>
using namespace std;

//O(N^2) time with extra queue using reverse continuously
void transform(stack<int> &st)
{
    queue<int> qu;
    int n = st.size();
    for (int i = 0; i < n - 1; i++)
    {
        int count = n - 1;
        while (count >= i)
        {
            qu.push(st.top());
            st.pop();
            count--;
        }
        count = n - 1;
        while (count >= i)
        {
            st.push(qu.front());
            qu.pop();
            count--;
        }
    }
    int count = n - 1;
    while (count >= 0)
    {
        qu.push(st.top());
        st.pop();
        count--;
    }
    count = n - 1;
    while (count >= 0)
    {
        st.push(qu.front());
        qu.pop();
        count--;
    }
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

//O(N) time and extra queue
void interleave(stack<int> &st)
{
    queue<int> qu;
    int n = st.size();
    int mid = n / 2 + 1;

    //push all to queue
    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }

    //push front half queue to stack
    int temp = mid;
    while (temp--)
    {
        st.push(qu.front());
        qu.pop();
    }

    //interleave stack and queue
    temp = mid - 1;
    while (temp--)
    {
        qu.push(st.top());
        st.pop();
        qu.push(qu.front());
        qu.pop();
    }
    if (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }

    //push queue to stack
    while (!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    printStack(st);

    // transform(st);
    interleave(st);
    printStack(st);
    return 0;
}