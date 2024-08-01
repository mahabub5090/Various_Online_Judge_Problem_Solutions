// Problem Link: https://codeforces.com/problemset/problem/1904/A

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
    int a,b,x,y,x2,y2;cin>>a>>b>>x>>y>>x2>>y2;
    set<pair<int,int>>st,st2;
    int dx[8]={a,a,-a,-a,b,b,-b,-b};
    int dy[8]={b,-b,b,-b,a,-a,a,-a};
    for(int i=0;i<8;i++)st.insert({x+dx[i],y+dy[i]}),st2.insert({x2+dx[i],y2+dy[i]});
    int cnt=0;
    for(auto &c:st)if(st2.find(c)!=st2.end())cnt++;
    cout<<cnt<<endl;
    
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
