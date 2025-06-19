//  Problem Link: https://codeforces.com/problemset/problem/1820/B

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
    string s;cin>>s;
    ll cntZ=count(s.begin(),s.end(),'0');
    if(cntZ==0){
        cout<<((ll)s.size()*(ll)s.size())<<endl;;
        return;
    }
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='1')cnt++;
        else break;
    }
    for(ll i=s.size()-1;i>=0;i--){
        if(s[i]=='1')cnt++;
        else break;
    }
    ll cnt2=0;
    for(auto &c:s){
        if(c=='1')cnt2++;
        else cnt=max(cnt,cnt2),cnt2=0;
    }
    cnt=min(cnt,1ll*s.size());
    ll ans=(cnt/2+cnt%2)*((cnt/2)+1);
    cout<<ans<<Endl;
/*
0 1 1 1 1 1 1 1 0 
0 0 1 1 1 1 1 1 1 
0 0 0 1 1 1 1 1 1 
1 1 0 0 1 1 1 1 1 
1 1 1 0 0 1 1 1 1
1 1 1 1 0 0 1 1 1
1 1 1 1 1 0 0 1 1
*/
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