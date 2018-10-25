/**
                    H.M.MEHEDI HASAN
                        ID:1702070
*/
#include<bits/stdc++.h>
#define sf(f)                            scanf("%lld",&f)
#define pf(f)                            printf("%lld\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)              ///int
#define onel(x)                          __builtin_popcountl(x)             ///long int
#define onell(x)                         __builtin_popcountll(x)            ///long long
using namespace std;
typedef long long ll;

ll FACTORIAL(ll n)
{
    if (n >= 1)
        return n*FACTORIAL(n-1);
    else
        return 1;
}

int main()
{
    ll n;
    sf(n);
    pf(FACTORIAL(n));
    return 0;
}

