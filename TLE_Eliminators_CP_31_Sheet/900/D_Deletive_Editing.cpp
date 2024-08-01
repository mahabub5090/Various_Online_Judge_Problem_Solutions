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
    if(s.size()<t.size())no;
    else{
        int j=t.size();
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=t[j])s[i]='0';
            else if(j) j--;
            else break;
        }
        string cmp="";
        for(auto &c:s)if(c!='0')cmp+=c;
        j=t.size();int i=cmp.size()-1,cnt=0;
        while(j>=0){
            if(t[j]!=s[i])i--;else j--,cnt++;
            if(i<0)break;
        }
        cout<<(cnt==t.size()?"YES":"NO")<<Endl;

    }
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