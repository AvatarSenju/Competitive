#include<bits/stdc++.h>
using namespace std;


void simpleSieve(int limit, vector<int> &prime)
{
    bool mark[limit + 1];
    memset(mark, false, sizeof(mark));

    for (int i = 2; i <= limit; ++i)
    {
        if (mark[i] == false)
        {
            // If not marked yet, then its a prime
            prime.push_back(i);
            for (int j = i; j <= limit; j += i)
                mark[j] = true;
        }
    }
}

// Finds all prime numbers in given range using
// segmented sieve
void primesInRange(int low, int high)
{
    // Comput all primes smaller or equal to
    // square root of high using simple sieve
    int limit = floor(sqrt(high)) + 1;
    vector<int> prime;
    simpleSieve(limit, prime);

    // Count of elements in given range
    int n = high - low + 1;

    // Declaring boolean only for [low, high]
    bool mark[n + 1];
    memset(mark, false, sizeof(mark));

    // Use the found primes by simpleSieve() to find
    // primes in given range
    for (int i = 0; i < prime.size(); i++)
    {
        // Find the minimum number in [low..high] that is
        // a multiple of prime[i] (divisible by prime[i])
        int loLim = floor(low / prime[i]) * prime[i];
        if (loLim < low)
            loLim += prime[i];
        if (loLim == prime[i])
            loLim += prime[i];
       
        for (int j = loLim; j <= high; j += prime[i])
            mark[j - low] = true;
    }

    // Numbers which are not marked in range, are prime
    for (int i = low; i <= high; i++)
        if (!mark[i - low] && i>1)
            cout << i << " ";
}

// Driver program to test above function
int main()
{
    int low = 800, high = 1000;
    primesInRange(low, high);
    return 0;
}
