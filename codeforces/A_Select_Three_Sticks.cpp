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
    while(t--){  
        sol();
    }
    return 0;
}
void sol(){
 ll n;
 cin>>n;
 vector<ll> a(n); map<ll,ll> m; ll t=0;
 for(ll i=0;i<n;i++)
 {
    cin>>a[i];
    m[a[i]]++;
    if(m[a[i]]==3)
    {
        t=1;
    }
 }
 if(t==1) {
    cout<<0<<"\n"; return;
 }
 ll ans=1e12;
 sort(a.begin(),a.end());
 for(ll i=0;i<n-2;i++)
 {
    ll s=abs(a[i]-a[i+1])+abs(a[i+2]-a[i+1]);
    ans=min(s,ans);
 }
  cout<<ans<<"\n";
}