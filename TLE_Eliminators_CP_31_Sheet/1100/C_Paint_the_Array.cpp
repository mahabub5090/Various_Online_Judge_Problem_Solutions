// Problem Link: https://codeforces.com/problemset/problem/1618/C

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
    int n;cin>>n;ll a[n];for(auto &c:a)cin>>c;
    ll g1=0,g2=0;
    for(int i=0;i<n;i+=2)g1=__gcd(g1,a[i]);
    for(int i=1;i<n;i+=2)g2=__gcd(g2,a[i]);
    int ok=1;
    for(int i=1;i<n;i+=2){
        if(a[i]%g1==0){
            ok=0;
            break;
        }
    }
    if(ok){
        cout<<g1<<endl;
        return;
    }
    ok=1;
    for(int i=0;i<n;i+=2){
        if(a[i]%g2==0){
            ok=0;
            break;
        }
    }
    if(ok){
        cout<<g2<<endl;
        return;
    }
    cout<<0<<endl;

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