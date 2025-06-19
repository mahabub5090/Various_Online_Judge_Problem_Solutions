// Problem Link: https://codeforces.com/problemset/problem/1899/B

/*
**************************************************************
*Bis'Millah Hir Rah'Manir Rahim == start with the name of \n *
*                    ALLAH Subhana Tayala                    *
*                Author: Md. Mahabubar Rahman                *
*               CSE,RPI && Rangpur, Bangladesh               *
**************************************************************
*/
#include <bits/stdc++.h>
using namespace std;
#define Allhamdulillah 0
#define pb(x) push_back(x)
#define pp() pop_back()
#define ll long long int
#define foi(i, s, e) for (int i = s; i < e; i++)
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'
#define nl cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n;cin>>n;ll a[n];for(auto &c:a)cin>>c;
    ll div=0;
    ll ans=0;
    while(div<=n){
        div++;
        if(n%div)continue;
        ll cnt=0;
        vector<ll>temp;
        for(ll i=0;i<n;i++){
            cnt+=a[i];
            if((i+1)%div==0)temp.push_back(cnt),cnt=0;
        }
        sort(temp.begin(),temp.end());
        ans=max(ans,temp.back()-temp[0]);
    }
    cout<<ans<<endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}