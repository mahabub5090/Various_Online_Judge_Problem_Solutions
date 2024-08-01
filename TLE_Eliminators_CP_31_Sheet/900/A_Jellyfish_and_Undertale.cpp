// Problem Link: https://codeforces.com/problemset/problem/1875/A

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
    ll l,in,n;cin>>l>>in>>n;
    ll a[n];for(auto &c:a)cin>>c;
    sort(a,a+n);
    ll i=0,cnt=0;
    while(true){
        if(in==1 && i==n)break;
        while(i<n && in+a[i]<=l)in+=a[i++];
        cnt+=in-1;
        in=1;
        if(i<n)in=min(l,in+a[i++]);
    }
    
    cout<<cnt+1<<endl;
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

