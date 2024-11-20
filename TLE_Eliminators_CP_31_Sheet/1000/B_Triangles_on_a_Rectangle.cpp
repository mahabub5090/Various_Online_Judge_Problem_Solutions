// Problem Link: https://codeforces.com/problemset/problem/1620/B

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
    int w,h;cin>>w>>h;
    int n;cin>>n;int a[n];for(auto &c:a)cin>>c;
    int m;cin>>m;int b[m];for(auto &c:b)cin>>c;
    int o;cin>>o;int c[o];for(auto &c:c)cin>>c;
    int p;cin>>p;int d[p];for(auto &c:d)cin>>c;
    ll ans=0;
    ans=max(ans,1ll*(a[n-1]-a[0])*h);
    ans=max(ans,1ll*(b[m-1]-b[0])*h);
    ans=max(ans,1ll*(c[o-1]-c[0])*w);
    ans=max(ans,1ll*(d[p-1]-d[0])*w);
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