//  Problem Link: https://codeforces.com/contest/1900/problem/A

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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    bool is3 = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            cnt++;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] == '.')
            is3 = true;
    }

    if (is3)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << cnt << endl;
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