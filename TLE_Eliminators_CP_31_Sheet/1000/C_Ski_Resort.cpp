// Problem Link: https://codeforces.com/problemset/problem/1840/C

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
    ll n,k,q;cin>>n>>k>>q;
    ll a[n];for(auto &c:a)cin>>c;
    vector<ll>vc;ll cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]<=q)cnt++;
        else vc.push_back(cnt),cnt=0;
    }
    vc.push_back(cnt);
    ll ans=0;
    for(auto &c:vc){
        if(c<k)continue;
        else{
            c-=(k-1);
            ans+=(c*(c+1))/2;
        }
    }
    
    cout<<ans<<Endl;

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