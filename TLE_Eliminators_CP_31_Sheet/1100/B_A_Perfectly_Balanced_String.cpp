// Problem Link: https://codeforces.com/problemset/problem/1673/B

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
    map<char,int>mp;for(auto &c:s)mp[c]++;
    for(auto &val:mp){
        char c=val.first;
        unordered_set<char>st;
        int flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                if(flag==0){
                    flag=1;
                    st.insert(c);
                }
                else{
                    if(st.size()<mp.size()){
                        no;return;
                    }
                    st.clear();
                    st.insert(c);
                }
            }
            else if(flag)st.insert(s[i]);
        }
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