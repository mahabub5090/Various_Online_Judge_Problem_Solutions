// Problem Link: https://codeforces.com/contest/1690/problem/D

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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int i=0,j=0,ans=k,cnt=0;
    while(j!=n){
        if(j<k){
            if(s[j]=='W')cnt++;
        }
        else{
            ans=min(ans,cnt);
            if(s[j]=='W')cnt++;
            if(s[i]=='W')cnt--;
            i++;
        }
        j++;
    }
    ans=min(ans,cnt);
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