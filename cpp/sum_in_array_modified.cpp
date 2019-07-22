#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    map<int, int> st;
    int i, n = nums.size();
    vector<int> found;
    for (i = 0; i < n; i++)
    {
        // int pos=;
        map<int, int>::iterator it;
        it = st.find(target - nums[i]);
        if (it != st.end())
        {

            found.push_back(it->second);

            found.push_back(i);
            break;
        }
        else
        {
            st.insert({nums[i], i});
        }
    }
    return found;
}

int main()
{
    vector<int> vect{3, 2, 4};
    vector<int> found;
    found = twoSum(vect, 6);
    cout << found[0] << endl;
    cout << found[1] << endl;
    return 0;
}