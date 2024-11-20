// Problem Link: https://codeforces.com/problemset/problem/1744/C

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
    int n;char c;cin>>n>>c;
    string s;cin>>s;
    s+=s;
    vector<int>suff(2*n),ans;
    if(s[s.size()-1]=='g')suff[s.size()-1]=s.size()-1;
    else suff[s.size()-1]=INT_MAX;
    for(int i=s.size()-2;i>=0;i--){
        if(s[i]=='g')suff[i]=i;
        else suff[i]=suff[i+1];
    }
    // for(auto &c:suff)cout<<c<<" ";
    // cout<<endl;
    // return;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]==c){
            ans.push_back(suff[i]-i);
        }
    }
    sort(ans.rbegin(),ans.rend());
    cout<<ans[0]<<endl;

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