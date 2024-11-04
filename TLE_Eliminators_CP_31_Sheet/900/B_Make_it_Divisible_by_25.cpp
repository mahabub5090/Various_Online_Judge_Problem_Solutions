// Problem Link:https://codeforces.com/problemset/problem/1593/B

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

int res(string c,string s){
    int n=s.size()-1,cnt=0;
    while(n>=0 && s[n]!=c[1])cnt++,n--;
    n-=1;
    while(n>=0 && s[n]!=c[0])cnt++,n--;
    return cnt;
}
void solve()
{
    string s;cin>>s;
    vector<string>vc={"00","25","50","75"};
    int ans=INT_MAX;
    for(auto &c:vc){
        ans=min(ans,res(c,s));
    }
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