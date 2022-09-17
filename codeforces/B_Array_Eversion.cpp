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
    ll mx = 0, temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= mx)
        {
            mx = a[i];
            temp = i;
        }
    }
    if (temp == n - 1)
    {
        cout << 0 << "\n";
        return;
    }
    mx = 0;
    for (ll i = temp + 1; i < n; i++)
    {
        if (a[i] >= mx)
        {
            mx = a[i];
            temp = i;
        }
    }
   // cout << temp << "\n";
    ll mxx = 0, cnt = 0;
    for (ll i = n - 1; i >= temp; i--)
    {
        if (a[i] > mxx)
        {
            mxx = a[i];
            cnt++;
        }
    }
    cout << cnt << "\n";
}