//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


vector<int>v[1000059];


int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long n,k,d;
        cin >> n >> k >> d;
        vector<string>v;
        map<string,int>popu;
        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            popu[s]=i+1;
        }

        long long start = (k*(d-1))%n;
        vector<pair<long long,string>>ss;
        for(int i=0;i<k;i++)
        {
            long long pop = popu[v[start%n]];
            ss.push_back({pop,v[start%n]});
            start++;
        }

        sort(ss.begin(),ss.end());
        cout << "Case #" << T-t << ": ";
        for(int i=0;i<ss.size();i++)    cout << ss[i].second << ' ';
        cout << endl;
    }
    return 0;
}



