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
 ll n,m;
 cin>>n>>m;
 ll d=max(n,m),c=min(n,m);
 if(n==1||m==1)
 {
    cout<<n<<" "<<m<<'\n';
 }
 else if(d<=3) cout<<2<<' '<<2<<'\n';
 else cout<<n<<" "<<m<<'\n';

 
}