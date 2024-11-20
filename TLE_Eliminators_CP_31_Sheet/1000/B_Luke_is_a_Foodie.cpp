// Problem Link: https://codeforces.com/problemset/problem/1704/B

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
    int n,x;cin>>n>>x;int a[n];for(auto &c:a)cin>>c;
    pair<int,int> prev={a[0]-x,a[0]+x};
    int cnt=0;
    for(int i=1;i<n;i++){
        pair<int,int> curr={a[i]-x,a[i]+x};
        pair<int,int> overlap={max(prev.first,curr.first),min(prev.second,curr.second)};
        if(overlap.first>overlap.second)cnt++,prev=curr;
        else prev=overlap;
    }
    cout<<cnt<<endl;
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