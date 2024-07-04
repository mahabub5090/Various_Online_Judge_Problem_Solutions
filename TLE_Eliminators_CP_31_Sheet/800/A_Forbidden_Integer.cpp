// Problem Link: https://codeforces.com/problemset/problem/1845/A

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

// Accepted;

void solve()
{
    int s,l,d;cin>>s>>l>>d;
    if(d!=1){
        yes;
        cout<<s<<Endl;
        for(int i=0;i<s;i++)cout<<1<<" \n"[i==s-1];
        return;
    }
    if(l==1 && d==1){no;return;}
    if(l==2 && s%2){no;return;}
    yes;
    if(s%2==0){
        cout<<s/2<<Endl;
        for(int i=0;i<s/2;i++)cout<<2<<" \n"[i==s/2-1];
        return;
    }
    s-=3;
    int cnt=0;
    while(s>0){
        s-=2;
        cnt++;
    }
    cout<<cnt<<Endl;
    cout<<3<<" ";
    for(int i=0;i<cnt;i++)cout<<2<<" ";
    cout<<Endl;
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