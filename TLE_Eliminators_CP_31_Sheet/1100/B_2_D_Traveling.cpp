// Problem Link: https://codeforces.com/problemset/problem/1869/B

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
    ll n,k,a,b;cin>>n>>k>>a>>b;
    vector<pair<ll,ll>>vc(n);
    for(auto &c:vc)cin>>c.first>>c.second;
    pair<ll,ll>al,bl;al=vc[a-1],bl=vc[b-1];
    ll ans=abs(al.first-bl.first)+abs(al.second-bl.second);
    ll mn=1e18,mn2=1e18;
    for(ll i=0;i<k;i++){
        mn=min(mn,abs(al.first-vc[i].first)+abs(al.second-vc[i].second));
        mn2=min(mn2,abs(bl.first-vc[i].first)+abs(bl.second-vc[i].second));
    }
    cout<<min(ans,mn+mn2)<<endl;

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