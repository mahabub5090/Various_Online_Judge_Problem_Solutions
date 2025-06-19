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
    ll n,k;cin>>n>>k;
    ll a[n];for(auto &c:a)cin>>c;
    sort(a,a+n);
    vector<ll>pref(n);
    pref[0]=a[0];
    for(int i=1;i<n;i++)pref[i]=pref[i-1]+a[i];
    ll ans=pref[n-1-k];
    for(int i=1;i<=k;i++){
        ans=max(ans,(pref[n-1-(k-i)]-pref[(2*i)-1]));
    }
    cout<<ans<<endl;
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