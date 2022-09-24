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
 for(ll i=0;i<n;i++)
 {
    for(ll j=0;j<=i;j++)
    {
       if(i>=2)
       {
        if(j==0||j==i) cout<<1<<' ';
        else cout<<0<<" ";
       }
       else
        cout<<1<<" ";
    }
    cout<<"\n";
 }




 
}