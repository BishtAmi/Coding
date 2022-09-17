#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a, b, n;
void sol();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
bool good(ll m)
{
    return ((m / a) * (m / b)) >= n;
}
void sol()
{
    cin >> a >> b >> n;
    ll r = 1;
    while (!good(r))
    {
        r = r * 2;
    }

    ll l = 0, m;
    while (l + 1 < r)
    {
        m = (l + r) / 2;
        // cerr<<l<<" "<<r<<"\n";
        if (good(m))
        {
            r = m;
        }
        else
            l = m;
    }
    cout << r << "\n";
}