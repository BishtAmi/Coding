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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), pre(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i + 1] < a[i])
        {
            cnt++;
        }
        pre[i] = cnt;
    }
    ll ans=0,temp,mx;
    for (ll i = 0; i + k - 2 < n; i++)
    {
        mx = pre[i + k - 2] - pre[i];
       // cout<<pre[i+k-2]<<" "<<pre[i]<<'\n';
        // if (a[i] > a[i - 1] && a[i + 1] < a[i])
        // {
        //     mx--;
        // }
        if (ans < mx)
        {
             ans=mx;
             temp =i;
        }
    }
    cout<<ans+1<<" "<<temp+1<<"\n";
}