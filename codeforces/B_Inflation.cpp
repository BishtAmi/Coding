#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ev=0,od;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)  ev++;
            else v.push_back(a[i]);
        }
        od=n-ev;
        int ans;
        ans=(ev*(2*od+ev-1))/2;
        if(v.size()>=1)
        {sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(__gcd(v[i],2*v[j])>1) ans++;
            }
        }
        }
        cout<<ans<<endl;
    }
}