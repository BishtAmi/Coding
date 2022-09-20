#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void sol();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
void sol()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll c = max(x, y), d = min(x, y);
    // cerr<<c<<" "<<d<<"\n";
    if (d == 0 && c > 0)
    {
        if ((n - 1) % c != 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            ll o = 1, xx = 0;
            for (ll i = 1; i <= n - 1; i++)
            {
                if (i % c != 0)
                {
                    cout << o << " ";
                }
                else if (xx == 0)
                {
                    cout << o << " ";
                    o += c + 1;
                    xx = 1;
                }
                else
                {
                    cout << o << " ";
                    o += c;
                }
            }
        }
        cout << '\n';
        return;
    }
    else
        cout << -1 << "\n";
}