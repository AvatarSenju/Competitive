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

void solve()
{
    string a;
    while (a.length() <= 0)
        getline(cin, a);
    string b;

    getline(cin, b);
    cout << a << b;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {

        solve();
        cout << "\n";
    }

    return 0;
}

// C++ program to check if a given Binary Tree is symmetric or not
// #include <bits/stdc++.h>

// using namespace std;

// // A Binary Tree Node
// struct Node
// {
//     int key;
//     struct Node *left, *right;
// };

// // Utility function to create new Node
// Node *newNode(int key)
// {
//     Node *temp = new Node;
//     temp->key = key;
//     temp->left = temp->right = NULL;
//     return (temp);
// }

// // Returns true if trees with roots as root1 and root2 are mirror
// bool ismirror(Node *root1, Node *root2)
// {
//     if (!root1 && !root2)
//         return true;
//     if (root1 && root2)
//     {
//         if (root1->key == root2->key)
//             return ismirror(root1->left, root2->right) && ismirror(root1->right, root2->left);
//     }
//     return false;
// }

// // Driver program
// int main()
// {
//     // Let us construct the Tree shown in the above figure
//     Node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(2);
//     root->left->left = newNode(2);
//     root->left->right = newNode(4);
//     root->right->left = newNode(4);
//     root->right->right = newNode(3);

//     cout << ismirror(root, root);
//     return 0;
// }
