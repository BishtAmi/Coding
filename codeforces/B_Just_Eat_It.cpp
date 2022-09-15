/*
 B. Just Eat It!
dp / greedy / implementation ...
*/

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
    ll sum = 0, c = 0, possum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] > 0)
        {
            c++;
        }
        possum += a[i];
    }
    if (c == n)
    {
        cout << "YES" << '\n';
        return;
    }
    ll mx = 0, mx_sum = INT_MIN;
    for (ll i = 0; i < n - 1; i++)
    {
        mx += a[i];
        if (mx > mx_sum)
        {
            mx_sum = mx;
        }
        if (mx < 0)
        {
            mx = 0;
        }
    }
    mx = 0;
    for (ll i = 1; i < n; i++)
    {
        mx += a[i];
        if (mx > mx_sum)
        {
            mx_sum = mx;
        }
        if (mx < 0)
        {
            mx = 0;
        }
    }
    if (mx_sum >= possum)
    {
        cout << "NO"
             << "\n";
    }
    else
        cout << "YES"
             << "\n";
}