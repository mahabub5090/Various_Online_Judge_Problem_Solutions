// Problem Link: https://codeforces.com/problemset/problem/1783/A

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
    int n;cin>>n; int arr[n];for(auto &c:arr)cin>>c;
    set<int>st;for(auto &c:arr)st.insert(c);
    if(st.size()==1)no;
    else{
        yes;
        sort(arr,arr+n,greater<int>());
        int f=0,l=n-1,cnt=0;
        for(int i=0;i<n;i++){
            if(cnt)cout<<arr[f++]<<" ",cnt=0;
            else cout<<arr[l--]<<" ",cnt=1;
        }

        cout<<endl;
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