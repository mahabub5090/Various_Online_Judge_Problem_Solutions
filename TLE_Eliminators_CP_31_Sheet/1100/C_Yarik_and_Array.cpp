// Problem Link: https://codeforces.com/problemset/problem/1899/C

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
    int n;cin>>n;
    int a[n];for(auto &c:a)cin>>c;
    int j=0,prev=-1,ans=-1e9,sum=0;
    while(j<n){
        if(sum<0)sum=0;
        if(prev==-1)sum+=a[j];
        else if(prev!=abs(a[j])%2)sum+=a[j];
        else sum=a[j];
        ans=max(ans,sum);
        prev=abs(a[j])%2;
        j++;
        // cout<<sum<<" ";
    }
    // cout<<endl;
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