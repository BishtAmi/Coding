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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll t = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] > b[i])
        {
            t = 0;
        }
    }
    if (t == 0)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        if (a[n - 1] != b[n - 1] && b[n - 1] - b[0] > 1)
        {
            cout << "NO"
                 << "\n";
            return;
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            if (a[i]!=b[i]&&b[i] - b[i + 1] > 1)
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
        cout << "YES"
             << "\n";
    }
}