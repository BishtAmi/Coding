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
    string s;
    cin >> s;
    ll c = count(s.begin(), s.end(), '1');
    ll d = n - c;
    if (c == n)
    {
        cout << 0 << "\n";
        return;
    }
    ll ans = 0;
    vector<ll> a(n+1, 0);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ll j = i + 1, k = 1; 
            while (s[j - 1] == '0' && j <= n)
            {
                if (a[j] == 0)
                    ans += i + 1;
                a[j] = 1;
                k++;
                j = (i + 1) * k;
                if (j > n)
                    break;
            }
        }
    }

    cout << ans << '\n';
}