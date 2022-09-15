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

    string str, str1;
    cin >> str >> str1;
    ll cnt = 0, cc = 0;
    vector<ll> ans;
    for (ll i = n - 1; i >= 0; i--)
    {

        if (str[i] != str1[i])
        {
            if (str[0] != str[i])
            {
                ans.push_back(1);
                str[0] = str[i];
            }
            cc++;
            ans.push_back(i + 1);
            for (ll j = 0; j <= i; j++)
            {
                if (str[j] == '0')
                    str[j] = '1';
                else
                    str[j] = '0';
            }
            reverse(str.begin(), str.begin() + i + 1);
        }
    }
    cout << ans.size() << " ";
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << '\n';
}