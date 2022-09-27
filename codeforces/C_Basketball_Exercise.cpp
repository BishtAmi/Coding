#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void sol();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
// int up = 0, down = 0;
ll f(int i, int j, vector<vector<ll>> a)
{
    if (j == 0)
        return a[i][0];
    if (j < 0)
        return -1e9;
    int up = -1e9, down = -1e9;
    // if(dp[i][j]!=-1)
    // {

    //     cout<<dp[i][j]<<"\n";
    //     return dp[i][j];
    // }
    if (i == 0)
    {
        ll l = f(1, j - 1, a) + a[i][j], r = f(0, j - 1, a);
        up = max(l, r);
    }
    else
    {
        ll l = f(0, j - 1, a) + a[i][j], r = f(1, j - 1, a);
        down = max(l, r);
    }

    return max(up, down);
}
void sol()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(2, vector<ll>(n)), dp(2, vector<ll>(n));
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j <n; j++)
        {
            cin >> a[i][j];
        }
    }
    dp[0][0]=a[0][0]; dp[1][0]=a[1][0]; 
    for(ll i=1;i<n;i++)
    {
       dp[1][i]=max(dp[0][i-1]+a[1][i],dp[1][i-1]);
       dp[0][i]=max(dp[1][i-1]+a[0][i],dp[0][i-1]);
    }
    cout<<max(dp[0][n-1],dp[1][n-1])<<'\n';
}