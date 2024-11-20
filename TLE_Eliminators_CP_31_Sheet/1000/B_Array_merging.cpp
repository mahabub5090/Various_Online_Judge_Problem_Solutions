// Problem Link: https://codeforces.com/problemset/problem/1831/B

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
    ll n;cin>>n;ll a[n],b[n];for(auto &c:a)cin>>c;
    for(auto &c:b)cin>>c;
    map<ll,int>mp,mp2;
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])cnt++;
        else mp[a[i]]=max(cnt,mp[a[i]]),cnt=1;
    }
    mp[a[n-1]]=max(cnt,mp[a[n-1]]);
    cnt=1;
    for(int i=0;i<n-1;i++){
        if(b[i]==b[i+1])cnt++;
        else mp2[b[i]]=max(cnt,mp2[b[i]]),cnt=1;
    }
    mp2[b[n-1]]=max(cnt,mp2[b[n-1]]);
    int ans=0;
    for(auto &c:a)ans=max(ans,mp[c]+mp2[c]);
    for(auto &c:b)ans=max(ans,mp[c]+mp2[c]);
    cout<<ans<<endl;
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