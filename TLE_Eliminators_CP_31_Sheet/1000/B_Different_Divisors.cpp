// Problem Link: https://codeforces.com/problemset/problem/1474/B

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

bool isprime(int n){
    if(n<=1)return 0;
    if(n==2 || n==3)return 1;
    if(n%2==0||n%3==0)return 0;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0)return 0;
    }
    return 1;
}
void solve()
{
    int n;cin>>n;
    vector<int>vc={1};
    for(int i=1+n;;i++){
        if(isprime(i)){
            vc.push_back(i);
            break;
        }
    }
    for(int i=vc.back()+n;;i++){
        if(isprime(i)){
            vc.push_back(i);
            break;
        }
    }
    cout<<vc[1]*vc[2]<<endl;

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