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
    vector<ll> a(n), w(k);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < k; i++)
    {
        cin >> w[i];
    }
    sort(a.begin(), a.end());
    sort(w.begin(), w.end());
    ll ans = 0;
    
    ll i = 0,temp=n-1;
    for (ll i = 0, j = n - 1; i <k; i++)
    {
        if (w[i] == 1)
        {
            ans += a[j] * 2; j--; temp=j;
        }
        else break;
    }
    sort(w.begin(), w.end(),greater<ll>());
    ll l = 0, r =temp; i=0; //cerr<<ans<<'\n';
    while (i < k)
    {
        //cerr<<ans<<'\n';
        if (w[i] == 1)
        {
           i++; continue; 
        }
        else
        {
            ans += a[r] + a[l];
            r--;
            l += w[i] - 1;
        }

        i++;
    }
    cout << ans << '\n';
}