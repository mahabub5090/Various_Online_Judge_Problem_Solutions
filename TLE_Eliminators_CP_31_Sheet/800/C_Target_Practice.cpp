// Problem Link: https://codeforces.com/problemset/problem/1873/C

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

/* min({i,j,9-i,9-j}) => 
0 0 0 0 0 0 0 0 0 0 
0 1 1 1 1 1 1 1 1 0 
0 1 2 2 2 2 2 2 1 0 
0 1 2 3 3 3 3 2 1 0 
0 1 2 3 4 4 3 2 1 0 
0 1 2 3 4 4 3 2 1 0 
0 1 2 3 3 3 3 2 1 0 
0 1 2 2 2 2 2 2 1 0 
0 1 1 1 1 1 1 1 1 0 
0 0 0 0 0 0 0 0 0 0 
*/

void solve()
{   
    int ans=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;
            cin>>c;
            if(c=='X')ans+=min({i,j,9-i,9-j})+1;
        }
    }
    cout<<ans<<Endl;
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