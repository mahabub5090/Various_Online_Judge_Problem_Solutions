// Problem Link: https://codeforces.com/problemset/problem/1614/B

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

// Accepted;

void solve()
{
    int n;cin>>n;
    int a[n];for(auto &c:a)cin>>c;
    vector<pair<int,int>>vc;
    for(int i=0;i<n;i++)vc.push_back({a[i],i});
    sort(vc.rbegin(),vc.rend());
    int dist=1;
    vector<int>loc(n+1);
    for(int i=0;i<n;i+=2)loc[i]=dist,loc[i+1]=-dist,dist++;
    ll tt=0;
    vector<int>ans(n+1,0);
    int i=0;
    for(auto &c:vc){
        tt+=abs(1ll*c.first*2*loc[i]);
        ans[c.second+1]=loc[i];
        i++;
    }
    cout<<tt<<endl;
    for(auto &c:ans)cout<<c<<" ";
    cout<<endl;
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