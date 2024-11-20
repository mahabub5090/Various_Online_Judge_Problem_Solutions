// Problem Link: https://codeforces.com/problemset/problem/1883/C

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
    int n,k;cin>>n>>k;int a[n];for(auto &c:a)cin>>c;
    for(auto &c:a){
        if(c%k==0){
            cout<<0<<endl;
            return;
        }
        c=k-(c%k);
    }
    sort(a,a+n);
    if(k==4){
        int cnt=0;
        for(auto &c:a)cnt+=(c%2==0);
        if(cnt>=2)cout<<0<<endl;
        else if(cnt>=1)cout<<min(a[0],1)<<endl;
        else cout<<min(a[0],2)<<endl;
        return;
    }
    cout<<a[0]<<endl;
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