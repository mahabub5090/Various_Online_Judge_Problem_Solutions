// Problem Link: https://codeforces.com/problemset/problem/1742/D

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

vector<set<int>>coprime(1001);
void solve()
{
    int n;cin>>n;int a[n];for(auto &c:a)cin>>c;
    int ans=-1;
    map<int,int>mp;
    for(int i=0;i<n;i++)mp[a[i]]=i+1;
    for(int i=1000;i>=1;i--){
        if(mp[i]==0)continue;
        int mx=0;
        for(auto &c:coprime[i]){
            if(mp[c])mx=max(mx,mp[c]);
        }
        if(mx)ans=max(ans,mp[i]+mx);
    }
    cout<<ans<<endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1000;i>=1;i--){
        for(int j=i;j>=1;j--){
            if(__gcd(i,j)==1)coprime[i].insert(j),coprime[j].insert(i);
        }
    }

    int t = 1;
    cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}