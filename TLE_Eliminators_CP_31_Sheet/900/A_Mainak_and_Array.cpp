// Problem Link: https://codeforces.com/problemset/problem/1726/A

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
    int n;cin>>n;int a[n];for(auto &c:a)cin>>c;
    int mn=*min_element(a,a+n),mx=*max_element(a,a+n);
    int ans=0;
    if(a[0]!=mn)ans=max(ans,a[n-1]-mn);
    if(a[n-1]!=mx)ans=max(ans,mx-a[0]);
    if(n>=2 && a[n-2]==mx && a[n-1]==mn)ans=mx-mn;
    if(n>=2 && a[0]==mx && a[1]==mn)ans=mx-mn;
    for(int i = 0; i < n; ++i){
		ans = max(ans, a[i==0?n-1:i-1] - a[i]);
	}
    ans=max(ans,a[n-1]-a[0]);
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