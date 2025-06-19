// problem Link: https://codeforces.com/problemset/problem/1669/F

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
    int n;cin>>n;int a[n];for(auto &c:a)cin>>c;
    vector<int>pref(n),suff(n);
    pref[0]=a[0];
    for(int i=1;i<n;i++)pref[i]=pref[i-1]+a[i];
    suff[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)suff[i]=suff[i+1]+a[i];
    map<int,int>mp;
    for(int i=0;i<n;i++)mp[suff[i]]=i;
    int ans=0;
    for(int i=0;i<n;i++){
        if(i<mp[pref[i]]){
            ans=i+1+n-mp[pref[i]];
        }
    }
    cout<<ans<<Endl;
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