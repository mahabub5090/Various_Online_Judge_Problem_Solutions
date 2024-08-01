// Problem Link: https://codeforces.com/problemset/problem/1807/D

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
    ll n,m;cin>>n>>m;ll a[n];for(auto &c:a)cin>>c;
    ll pre[n];pre[0]=a[0];
    for(ll i=1;i<n;i++)pre[i]=pre[i-1]+a[i];
    ll sum=0;for(auto &c:a)sum+=c;
    while(m--){
        ll l,r,k;cin>>l>>r>>k;
        ll cnt=(r+1-l)*k;
        ll extra=sum-(pre[r-1]-(l-2<0?0:pre[l-2]));
        extra+=cnt;
        extra%2?yes:no;
    }

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