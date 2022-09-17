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
    ll n, pos, m;
    cin >> n >> pos >> m;
    ll l, r, cnt = 0, lr = 0, rr = 0;
    while (m--)
    {
        cin >> l >> r;
        if (l <= pos && pos <= r)
        {
            if (lr == 0 && rr == 0)
            {
                lr = l;
                rr = r;
            }
            lr = min(l, lr);
            rr = max(r, rr);
        }
        else if (l >= lr && r <= rr)
            continue;
        else if (l <= rr && l >= lr)
        {
            rr = r;
        }
        else if (r >= lr && r <= rr)
        {
            lr = l;
        }
        else if (l <= lr && r >= rr)
        {
            lr = l;
            rr = r;
        }
    
    }
    cout << rr - lr + 1 << "\n";
}