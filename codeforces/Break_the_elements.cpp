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
 vector<ll> arr(n); ll ev=0,od;
 for(ll i=0;i<n;i++)
 {
    cin>>arr[i];
    if(arr[i]%2==0) ev++;
 }
 if(ev==n) cout<<0<<"\n";
 else
 cout<<ev<<'\n';


}