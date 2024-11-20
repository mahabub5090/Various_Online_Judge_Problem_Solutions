// Problem Link: https://codeforces.com/problemset/problem/1876/A

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
    ll n,p;cin>>n>>p;ll a[n],b[n];for(auto &c:a)cin>>c;
    for(auto &c:b)cin>>c;
    vector<pair<ll,ll>>vc;
    for(ll i=0;i<n;i++)vc.push_back({b[i],a[i]});
    sort(vc.begin(),vc.end());
    ll need=n-1,ans=0;
    for(auto &c:vc){ 
        if(c.first<=p){
            ans+=min(need,c.second)*c.first;
            need-=min(need,c.second);
        }
    }
    cout<<ans+(p*(need+1))<<endl;
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