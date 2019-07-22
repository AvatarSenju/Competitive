#include <iostream>
#include<string>


using namespace std;



int main()
{
    int test;
    cin>>test;

    string str;
    while(test>0){
        
        long long int count=0;
        getline(cin,str);
        while (str.length() == 0)
            getline(cin, str);
        for(long int i=0;i<str.length();i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                count += (str.length() - i) * (i + 1);
            }
        }
        
        cout<<count<<endl;
        test--;
    }
    return 0;
}
