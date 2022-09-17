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
    ll mi=1e12,in=n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]<mi)
        {
            mi=a[i]; in=i;
        }
    }
    cout << n - 1 << "\n";
   for(ll i=in+1;i<n;i++)
   {
     cout<<in+1<<" "<<i+1<<" "<<mi<<" "<<mi+i-in<<"\n";
   }
   for(ll i=in-1;i>=0;i--)
   {
      cout<<in+1<<" "<<i+1<<" "<<mi<<" "<<mi+in-i<<"\n";
   }
}