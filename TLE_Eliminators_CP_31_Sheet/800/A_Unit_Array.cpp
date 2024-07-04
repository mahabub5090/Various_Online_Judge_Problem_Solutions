// Problem Link: https://codeforces.com/problemset/problem/1834/A

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
#define no cout <<n "NO\n"

void solve()
{
    int n;cin>>n;
    int arr[n];for(auto &c:arr)cin>>c;
    int cnt=0;
    for(auto &c:arr)if(c==-1)cnt++;
    if(n-cnt>=cnt)cout<<cnt%2<<endl;
    else{
        int ex=cnt-n/2;
        cout<<ex+(cnt-ex)%2<<Endl;     
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