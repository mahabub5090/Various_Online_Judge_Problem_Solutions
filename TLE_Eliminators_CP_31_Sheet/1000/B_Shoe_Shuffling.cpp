// Problem Link: https://codeforces.com/problemset/problem/1691/B

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
    map<int,vector<int>>mp;int cnt=0;
    for(auto &c:a)mp[c].push_back(cnt),cnt++;
    for(auto &c:mp){
        if(c.second.size()==1){
            cout<<-1<<endl;
            return;
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        vector<int>temp;
        while(!mp[a[i]].empty()){
            temp.push_back(mp[a[i]].back());
            mp[a[i]].pop_back();
        }
        reverse(temp.begin(),temp.end());
        int c=temp.back();
        temp.pop_back();
        temp.insert(temp.begin(),c);
        for(auto &c:temp)ans.push_back(c);
        i+=cnt-1;
    }
    for(auto &c:ans)cout<<c+1<<" ";
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