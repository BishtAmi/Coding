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
    string s;
    cin >> s; ll n=s.length();
    vector<ll> dig(n),suff(n);
    ll mi = 11,chk=0;
    map<ll,ll> m;
    for(ll i=n-1;i>=0;i--)
    {
        dig[i]=s[i]-'0';
        mi=min(mi,dig[i]);
        suff[i]=mi;
    }
    ll nine=9;
    for(ll i=0;i<n;i++)
    {
        if(dig[i]>suff[i])
        {
            m[min(dig[i]+1,nine)]++;
        }
        else m[dig[i]]++;
    }

    for(auto i:m)
    {
        while(i.second--)
        {
            cout<<i.first;
        }
    }
   
    cout << "\n";
}