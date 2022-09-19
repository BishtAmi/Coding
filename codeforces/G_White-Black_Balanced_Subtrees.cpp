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
void dfs(ll node, vector<ll> graph[], string s, vector<ll> &b, vector<ll> &w)
{
    if (s[node - 1] == 'W')
        w[node]++;
    // cout << node << " ";
    else
        b[node]++;
    for (auto it : graph[node])
    {
        dfs(it, graph, s, b, w);
        w[node] += w[it];
        b[node] += b[it];
    }
}
void sol()
{
    ll n;
    cin >> n;
    vector<ll> b(n + 1, 0), w(n + 1, 0);
    vector<ll> a(n);
    vector<ll> adj[n + 1];
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        adj[a[i]].push_back(i + 2);
    }
    string s;
    cin >> s;
    ll ans = 0;
    dfs(1, adj, s, b, w);
    for (ll i = 1; i <= n; i++)
    {
        if (w[i] == b[i])
            ans++;
    }

    cout << ans << "\n";
}