    // Problem Link: https://codeforces.com/problemset/problem/1610/B  

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

    int possible(int x,auto a){
        vector<int>vc,vc2;
        for(auto &c:a)if(c!=x)vc.push_back(c);
        vc2=vc;
        reverse(vc2.begin(),vc2.end());
        return vc==vc2;
    }
    void solve()
    {
        int n;cin>>n;vector<int> a(n);for(auto &c:a)cin>>c;
        int i=0,j=n-1;
        int ans=1;
        while(i<=j){
            if(a[i]==a[j])i++,j--;
            else{
                ans=possible(a[i],a) || possible(a[j],a);
                break;
            }
        }
        ans?yes:no;
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