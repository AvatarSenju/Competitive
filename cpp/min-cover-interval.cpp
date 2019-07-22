#include<bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

pair<int,int> interval(vector<pair<int,int>> vect)
{
    sort(vect.begin(), vect.end());
    int second = vect[vect.size()-1].first;
    
    sort(vect.begin(), vect.end(),sortbysec);
    int first = vect[0].second;
    return(make_pair(first,second));
}

int main()
{
    
    vector<pair<int,int>> vect;
    vect.push_back(make_pair(0,5));
    vect.push_back(make_pair(2,3));
    vect.push_back(make_pair(4,6));
    vect.push_back(make_pair(1,4));
    vect.push_back(make_pair(7,9));

    pair<int,int> p = interval(vect);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;

}