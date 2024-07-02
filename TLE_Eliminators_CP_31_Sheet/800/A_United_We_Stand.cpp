// Problem Link: https://codeforces.com/problemset/problem/1859/A

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
    int n;cin>>n;int arr[n];for(auto &c:arr)cin>>c;
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<-1<<endl;return;
    }
    int j=0;
    while(arr[0]==arr[j])j++;
    cout<<j<<" "<<n-j<<endl;
    for(int i=0;i<j;i++)cout<<arr[i]<<" ";
    for(int i=j;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
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