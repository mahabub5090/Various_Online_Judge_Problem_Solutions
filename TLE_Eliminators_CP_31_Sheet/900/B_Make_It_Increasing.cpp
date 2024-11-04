// Problem link: https://codeforces.com/problemset/problem/1675/B

//@ Problem Link: https://codeforces.com/problemset/problem/1675/B

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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int last = arr[n - 1];
    int op = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= last)
        {
            while (arr[i] >= last && arr[i] != 0)
            {
                op++;
                arr[i] /= 2;
            }
        }
        last = arr[i];
        if (arr[i] == arr[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << op << endl;
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