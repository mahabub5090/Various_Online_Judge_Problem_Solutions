// Problem Link: https://codeforces.com/problemset/problem/1913/B

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
    int cnt=0,cnt2=0;
    for(auto &c:s)cnt+=c=='0',cnt2+=c=='1';
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(cnt)cnt--;
            else{
                cout<<s.size()-i<<endl;
                return;
            }
        }
        else{
            if(cnt2)cnt2--;
            else {
                cout<<s.size()-i<<endl;
                return;
            }
        }
    }
    cout<<0<<endl;
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