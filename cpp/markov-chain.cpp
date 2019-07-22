#include<bits/stdc++.h>
using namespace std;

struct chain{
    char from=' ';
    char to=' ';
    double prob=0.0;
};
typedef struct chain Chain;


char next_State(char pres_State,vector<Chain *> &vect)
{
    double next_prob=rand()%1000 +1;
    next_prob/=1000;
    // cout<<next_prob
    int n=vect.size();
    // char from = vect[0]->from;
    // next_prob=0.989;
    // cout<<next_prob<<" "<<n<<endl;
    for(int i=0;i<n;i++)

    {
        if(vect[i]->from==pres_State)
        {
        // cout<<pres_State<<" "<<vect[i]->from<<" "<<vect[i]->to<<" "<< vect[i]->prob<<endl;

            if (next_prob<=vect[i]->prob)
                return vect[i]->to;
            else
            {
                next_prob-=vect[i]->prob;
            }
        }
    }
    return ' ';



}

void make_chain(vector<Chain *>&vect,char from,char to,double prob)
{
    Chain *ch= new Chain;
    ch->from=from;
    ch->to=to;
    ch->prob=prob;
    // vector<Chain *> vect;
    vect.push_back(ch);

}

int main()
{
    srand(time(0));
    // int next_prob=rand()%100;
    double next_prob=rand()%100 +1;
    next_prob/=100;
    // Chain *ch= new Chain;
    // ch->from='a';
    // ch->to='b';
    // ch->prob=0.5;
    vector<Chain *> vect;
    make_chain(vect,'a','a',0.9);
    make_chain(vect,'a','b',0.075);
    make_chain(vect,'a','c',0.025);
    make_chain(vect,'b','a',0.15);
    make_chain(vect,'b','b',0.8);
    make_chain(vect,'b','c',0.05);
    make_chain(vect,'c','a',0.25);
    make_chain(vect,'c','b',0.25);
    make_chain(vect,'c','c',0.5);

    // vect.push_back(ch);
    // cout<<ch->prob;
    map<char,int>mp;
    char start='a';
    for(int i=0;i<5000;i++)
    {
        int next=next_State(start,vect);
        mp[next]++;
        start=next;

    }
    for(auto m:mp)
    {
        cout<<m.first<< " "<<m.second<<endl;
    }
}