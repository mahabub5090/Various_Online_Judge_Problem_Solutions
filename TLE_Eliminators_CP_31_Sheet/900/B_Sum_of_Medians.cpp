// Problem Link: https://codeforces.com/problemset/problem/1440/B

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
    int n,k;cin>>n>>k;int arr[n*k];for(auto &c:arr)cin>>c;
    ll ans =0,j=n*k-(n/2+1);
    
    for (int i=0;i<k;i++) {
        ans+=arr[j];
        j-=n/2+1;
    }

    cout<<ans<<endl;

    /*
     int n,k;cin>>n>>k;int arr[n*k];for(auto &c:arr)cin>>c;
    ll ans=0,j=n/2;
    reverse(arr,arr+(n*k));
    for (int i=0;i<k;i++) {
        ans+=arr[j];
        j+=n/2+1;
    }
    cout<<ans<<endl;
    */
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