#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void sol();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans=1e18;
    for (ll i = 0; i < n; i++)
    {
        ll cnt = 0, prev = 0, curr;
        if(i>=1)
        for (ll j = i - 1; j >= 0; j--)
        {
            curr =-a[j]; 
            if (curr < prev)
            {
                cnt++;
                prev = curr;
            }
            else
            {
                ll d = -(curr + prev); //cout<<d<<" "<<curr<<" "<<prev<<"\n";
                d = d / (-curr);
                cnt += d;
                prev = curr*d;
            }
        }
        curr=0,prev=0;
        if(i<n-1)
        for(ll jj=i+1;jj<n;jj++)
        {
            curr=a[jj];
            if(curr>prev)
            {
                cnt++; prev=curr;
            }
            else
            {
                ll d=(curr+prev);  //cout<<d<<" "<<curr<<" "<<prev<<"\n";
                d=d/curr;
                cnt+=d;
                prev=curr*d;
            }
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<"\n";
}