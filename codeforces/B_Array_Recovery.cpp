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
    vector<ll> a(n), d(n),pre(n); ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
        pre[i]=sum;
    }
    // if(n==2&&a[0]>=a[1])
    // {
    //   cout<<-1<<'\n'; return;
    // }
    for (ll i = 1; i < n; i++)
    {
       if(a[i]<=pre[i-1]&&a[i]!=0)
       {
         cout<<-1<<'\n'; return;
       }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<pre[i]<<' ';
    }
    cout<<'\n';
}