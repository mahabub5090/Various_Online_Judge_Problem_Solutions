// Problem Link: https://codeforces.com/problemset/problem/1362/A

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
    ll a,b;cin>>a>>b;
    if(a==b){cout<<0<<endl;return;}
    if(b>a)swap(a,b);
    if(a%b!=0){
        cout<<-1<<endl;return;
    }
    ll diff=a/b;
    int cnt=0;
    while(diff%8==0)cnt++,diff/=8;
    while(diff%4==0)cnt++,diff/=4;
    while(diff%2==0)cnt++,diff/=2;
    if(diff!=1)cout<<-1<<endl;
    else cout<<cnt<<endl;
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