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
void sol()
{
    ll m, s;
    cin >> m >> s;
    if(m==1&&s==0)
    {
        cout<<0<<" "<<0<<'\n'; return;
    }
    if (s == 0||9*m<s)
    {
        cout << -1 << " " << -1 << '\n';
    }
    else
    {
        ll temp = 9, d;
        string str;
        for (ll i = 0; i < m; i++)
        {
            s -= temp;
            if (s <= 0)
            {
                s += temp;
                temp = s;
                string aa = to_string(temp);
                str += aa[0];
                break;
            }
            string aa = to_string(temp);
            str += aa[0];
        }
        temp = str.length();
        string rev;
        string str1;
        if (temp < m)
        {
            ll num = (str[temp - 1] - '1'); //cout<<str[temp-1]<<' '<<num<<'\n';
            string ss = to_string(num);
            rev += ss[0];  //cout<<rev<<"\n";
            for (ll i = temp - 2; i >= 0; i--)
            {
                num = (str[i] - '0');
                ss = to_string(num);
                rev += ss[0];
            }
            for (ll i = 0; i <=m - temp - 1; i++)
            {
                str += '0';
            }
            for(ll i=0;i<=m-temp-1;i++)
            {
                if(i==0) str1+='1';
                else 
                str1+='0';
            }
            str1 += rev;
            cout << str1 << " " << str << "\n";
            return;
        }
        else
        {
            rev=str;
            reverse(str.begin(),str.end());
            cout << str << " " << rev << '\n';
        }

       
    }
}