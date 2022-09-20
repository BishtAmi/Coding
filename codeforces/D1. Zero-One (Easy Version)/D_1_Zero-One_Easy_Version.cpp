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
    string a, b;
    cin >> a >> b;
    ll cnt = 0;
    vector<ll> chk(n, 0);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cnt++;
            chk[i] = 1;
        }
    }
    ll temp = cnt;
    if (cnt % 2)
    {
        cout << -1 << "\n";
    }
    else
    {
        ll ans = 0;
        ll c = 0;
        ll t = 0;
        if (cnt == 2)
        {

            for (ll i = 0; i < n - 1; i++)
            {
                if (chk[i] == chk[i + 1] && chk[i] == 1)
                {
                    t = 1;
                    break;
                }
            }
        }
        if (t)
        {
            cout << min(x * (ll)(cnt / 2), cnt * y) << "\n";
        }
        else
        {
            cout << y * (ll)(cnt / 2) << "\n";
        }
    }
}