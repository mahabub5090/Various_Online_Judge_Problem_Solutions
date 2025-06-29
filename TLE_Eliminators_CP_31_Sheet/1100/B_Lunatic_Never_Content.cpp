// Problem Link: https://codeforces.com/problemset/problem/1826/B

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
    int n;cin>>n;vector<int> a(n);for(auto &c:a)cin>>c;
    int ans=0;
    for(int i=0;i<n/2+1;i++){
        ans=__gcd(ans,abs(a[i]-a[n-i-1]));
    }
    cout<<ans<<Endl;
}
/*mdmahabub55*/
int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    // t = 1;

    while(t--)
    {
        solve();
    }
    return Allhamdulillah;
}