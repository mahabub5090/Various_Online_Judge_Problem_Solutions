// Problem link: https://codeforces.com/problemset/problem/1842/B

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
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n,x;cin>>n>>x;
    int a[n],b[n],cc[n];for(auto &c:a)cin>>c;for(auto &c:b)cin>>c;for(auto &c:cc)cin>>c;
    stack<int>st,st2,st3;
    for(int i=n-1;i>=0;i--)st.push(a[i]);
    for(int i=n-1;i>=0;i--)st2.push(b[i]);
    for(int i=n-1;i>=0;i--)st3.push(cc[i]);
    int ans=0,ans2=0,ans3=0;
    while(st.size() && (st.top()|x)==x)ans|=st.top(),st.pop();
    while(st2.size() && (st2.top()|x)==x)ans2|=st2.top(),st2.pop();
    while(st3.size() && (st3.top()|x)==x)ans3|=st3.top(),st3.pop();
    ans|=ans2;
    ans|=ans3;
    ans==x?yes:no;
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