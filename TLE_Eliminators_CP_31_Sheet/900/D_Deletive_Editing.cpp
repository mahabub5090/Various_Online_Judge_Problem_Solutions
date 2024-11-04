// Problem Link: https://codeforces.com/problemset/problem/1666/D

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
    string s,t;cin>>s>>t;
    if(s.size()<t.size()){no;return;}
    map<char,int>mp,mp2;
    int i=s.size()-1,j=t.size()-1;
    while(j>=0){
        if(s[i]==t[j] && mp[s[i]]==mp2[s[i]]){i--,j--;continue;}
        while(i>=0 && t[j]!=s[i])mp[s[i--]]++;
        if(s[i]==t[j] && mp[s[i]]==mp2[s[i]]){i--,j--;continue;}
        if(mp[t[j]]!=mp2[t[j]]){no;return;}
        mp2[t[j]]++;
        if(i<0 && j>=0){no;return;}
        j--;
 
    }
    yes;
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