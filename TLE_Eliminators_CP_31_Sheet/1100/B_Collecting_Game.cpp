// Problem Link: https://codeforces.com/problemset/problem/1904/B

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
    vector<int>v(a,a+n);
    sort(a,a+n);
    vector<pair<ll,ll>>ans;
    vector<ll>pref(n,0);
    pref[0]=a[0];
    for(ll i=1;i<n;i++)pref[i]+=pref[i-1]+a[i];

    ll cnt=0,j=1;
    for(ll i=0;i<n;i++){
        ll p=pref[i];
        j=max(j,i+1);
        if(i)cnt=max(i,ans.back().second);
        while(j<n && p>=a[j])p+=a[j++],cnt++;
        ans.push_back({a[i],cnt});
    }
    map<ll,ll>mp;
    for(auto &c:ans)mp[c.first]=c.second;
    for(auto &c:v)cout<<mp[c]<<" ";
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

