// Problem Link: https://codeforces.com/problemset/problem/1791/E


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
    ll n;cin>>n;ll a[n];for(auto &c:a)cin>>c;
    ll neg=0,z=0;
    for(auto &c:a){
        if(c<0)neg++;
        else if(c==0)z++;
    }
    if(z){
        ll tt=0;for(auto &c:a)tt+=abs(c);
        cout<<tt<<Endl;
        return;
    }
    for(auto &c:a)if(c<0)c*=-1;
    sort(a,a+n);
    ll tt=0;for(auto &c:a)tt+=c;
    if(neg%2)tt-=2*a[0];
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