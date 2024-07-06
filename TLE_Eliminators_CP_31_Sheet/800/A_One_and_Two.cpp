// Problem Link: https://codeforces.com/problemset/problem/1788/A?locale=en

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
    int n;cin>>n; ll arr[n];for(auto &c:arr)cin>>c;
    int a,b;
    for(int i=0;i<n;i++){
        a=1,b=1;
        for(int j=0;j<=i;j++)arr[j]==2?a++:a+=0;
        for(int j=i+1;j<n;j++)arr[j]==2?b++:a+=0;
        if(a==b){cout<<i+1<<Endl;return;}
        // cout<<a<<" "<<b<<endl;
    }
    cout<<-1<<Endl;
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