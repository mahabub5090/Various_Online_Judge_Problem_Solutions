// Problem Link: https://codeforces.com/problemset/problem/1447/B

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
    int n,m;cin>>n>>m;int a[n][m];for(auto &c:a)for(auto &cc:c)cin>>cc;
    int tt=0,cnt=0,mn=1e9;
    for(auto &c:a){
        for(auto &cc:c){
            if(cc<=0)cnt++;
            mn=min(mn,abs(cc));
            tt+=abs(cc);
        }
    }
    if(cnt%2)tt-=2*mn;
    cout<<tt<<Endl;
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