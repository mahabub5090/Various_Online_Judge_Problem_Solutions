// Problem link: https://codeforces.com/problemset/problem/1506/C

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
    string a,b;cin>>a>>b;
    if(b.size()>a.size())swap(a,b);
    int ans=a.size()+b.size(),cnt=0;
    for(int i=0;i<a.size();i++){
       int k=i,temp=0;
       for(int j=0;j<b.size();j++){
            if(a[k]==b[j]){
                k++,temp++;
            }
            else{
                cnt=max(cnt,temp);
                k=i;
                temp=0;
                if(a[k]==b[j]){
                    k++,temp++;
                }
            }
       }
       cnt=max(cnt,temp);
    }
    cout<<ans-(cnt*2)<<Endl;

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