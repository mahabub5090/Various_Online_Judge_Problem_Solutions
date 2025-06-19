// Problem Link: https://codeforces.com/contest/1873/problem/E

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
    ll l=0,r=1e18;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll tt=0;
        for(auto &c:a){
            if(tt>x)break;
            tt+=max(0ll,mid-c);
        }
        if(tt>x)r=mid-1;
        else l=mid+1;
    }
    cout<<l-1<<endl;
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