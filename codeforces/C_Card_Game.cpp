#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mod = 998244353;
void sol();
ll printNcR(int n, int r)
{

    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if(n==0) return 0;
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r>0)
        {
            //cerr<<p<<'\n';
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);

            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;

            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    // cerr << p << endl;
    return p;
}
vector<ll> ans(61,0), ansboris(61,0);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (ll i = 2; i <= 60; i += 2)
    {
        ll d = i / 2;
        ans[i] = printNcR(i - 1, d)+ansboris[i-2];
        ansboris[i] = printNcR(i - 2, d)+ans[i-2];
       // cerr << ans[i] % mod << ' ' << ansboris[i] % mod << ' ' << 1 << '\n';
    }
    ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}

// Returns factorial of
void sol()
{
    ll n;
    cin >> n;
    cout << ans[n] % mod << ' ' << ansboris[n] % mod << ' ' << 1 << '\n';
}