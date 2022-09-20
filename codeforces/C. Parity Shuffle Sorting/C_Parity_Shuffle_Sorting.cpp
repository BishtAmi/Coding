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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> x, y;
    ll cnt = 1;
    cout << n - 1 << "\n";
    if ((a[0] + a[n - 1]) % 2 == 0)
    {
        a[0] = a[n - 1];
    }
    else
    {
        a[n - 1] = a[0];
    }
    if (n > 1)
    {
        cout << 1 << " " << n << "\n";
        for (ll i = 1; i < n - 1; i++)
        {
            if ((a[i] + a[0]) % 2 == 1)
            {
                a[i] = a[0];
                cout << 1 << " " << i + 1 << "\n";
            }
            else
            {
                a[i] = a[n - 1];
                cout << i + 1 << " " << n << "\n";
            }
        }
    }
}