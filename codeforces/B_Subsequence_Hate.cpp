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
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll> pre0(n), pre1(n);
    ll c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            c++;
        else
            d++;
        pre0[i] = c;
        pre1[i] = d;
    }
    ll ans=1e9;
    for(ll i=0;i<n;i++)
    {
        ll x=pre0[i]+d-pre1[i];
        ll y=pre1[i]+c-pre0[i];
        ans=min(ans,min(x,y));
    }

    cout << ans << "\n";
}
