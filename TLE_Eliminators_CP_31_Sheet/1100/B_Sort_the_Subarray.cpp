// Problem Link: https://codeforces.com/problemset/problem/1821/B

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
    int n;cin>>n;int a[n],aa[n];for(auto &c:a)cin>>c;for(auto &c:aa)cin>>c;
    int l=0,r=n-1;
    while(l<n && a[l]==aa[l])l++;
    while(r>=0 && a[r]==aa[r])r--;
    while(l>0 && aa[l-1]<=aa[l])l--;
    while(r+1<n && aa[r]<=aa[r+1])r++;
    cout<<l+1<<" "<<r+1<<Endl;
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