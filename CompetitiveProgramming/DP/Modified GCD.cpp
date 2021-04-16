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


int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long a,b;
        cin >> a >> b;
        if(a>b) swap(a,b);
        long long gcd = __gcd(a,b);
        vector<long long>factors;
        factors.push_back(-1);
        factors.push_back(-gcd);
        for(long long i=2;i*i<=gcd;i++)
        {
            if(a%i==0 and b%i==0)
            {
                factors.push_back(-i);
                factors.push_back(-gcd/i);
               // cout << i << ' ' << -a/i << endl;
            }
        }
        sort(factors.begin(),factors.end());
      //  for(auto it:factors)    cout << it << ' ';
      //  cout << endl;

        long long q;
        cin >> q;
        while(q--)
        {
            long long lo,hi;
            cin >> lo >> hi;
            int pos = lower_bound(factors.begin(),factors.end(),-hi)-factors.begin();
           // cout << factors[pos] << endl;
            if(factors[pos]<=-lo)    cout << -factors[pos] << endl;
            else                    cout << -1 << endl;
        }
    }
    return 0;
}



