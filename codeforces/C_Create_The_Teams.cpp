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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll temp = n, cnt = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll d = temp - i;
        if ((d)*a[i] >= x)
        {
            cnt++;
            temp = i;
        }
    }
    cout << cnt << '\n';
}