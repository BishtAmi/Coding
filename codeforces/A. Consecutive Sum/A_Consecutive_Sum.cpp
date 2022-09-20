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
    vector<ll> a(n);
    ll sum = 0;
    vector<ll> v(k);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i%k]=max(v[i%k],a[i]);
    }
    ll sum1=0;
    ll t=v.size();
    for(ll i=0;i<k;i++)
    {
        sum1+=v[i];
    }
    for (ll i = 0; i <= n-k; i++)
    {
         ll s=0;
         for(ll j=i;j<i+k;j++)
         {
           s+=a[j]; 
         } 
         sum=max(s,sum);
    }
    cout<<max(sum1,sum)<<"\n";

}