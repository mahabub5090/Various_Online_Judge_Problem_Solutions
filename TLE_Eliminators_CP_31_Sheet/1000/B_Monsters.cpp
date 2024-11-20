// Problem Link: https://codeforces.com/problemset/problem/1849/B

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
    ll n,k;cin>>n>>k;
    ll a[n];for(auto &c:a)cin>>c;
    for(auto &c:a)c=(k-c%k)%k;
    vector<pair<ll,ll>>vc;
    for(ll i=0;i<n;i++)vc.push_back({a[i],i});
    sort(vc.begin(),vc.end());//[](auto &a,auto &b){
        // if(a.first==b.first)return a.second<b.second;
        // return a.first<b.first;
    // });
    for(auto &c:vc)cout<<c.second+1<<" ";cout<<Endl;
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