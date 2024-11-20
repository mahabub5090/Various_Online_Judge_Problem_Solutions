// Problem Link: https://codeforces.com/problemset/problem/1715/B

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

// Accepted;

void solve()
{
    ll n,k,b,s;cin>>n>>k>>b>>s;
    ll tt=k*b,limit=tt+(k-1)*(n);
    if(n==1){
        cout<<(s/k==b?s:-1)<<endl;
        return;
    }
    if(s<tt || s>limit){
        cout<<-1<<endl;
        return;
    }
    limit=min(limit,s);
    if(limit<=tt+(k-1)){
        cout<<limit<<" ";
        for(int i=0;i<n-1;i++)cout<<"0 ";
        cout<<endl;
        return;
    }
    limit-=tt+(k-1);
    cout<<tt+(k-1)<<" ";
    ll single=limit/(n-1);
    ll ex=limit%(n-1);
    for(int i=0;i<ex;i++)cout<<single+1<<" ";
    for(int i=ex;i<n-1;i++)cout<<single<<" ";
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