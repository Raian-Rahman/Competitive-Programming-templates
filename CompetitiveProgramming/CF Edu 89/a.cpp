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
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long a,b;
        cin >> a >> b;
        if(a<b)
            swap(a,b);
        long long cnt=0;

        if(a==b)
        {
            cnt = ((a+b)/3);
        }
        else
        {
            int p = a-b;
            if(p>=b)
            {
                cnt = min(a/2,b);
            }
            else
            {
                cnt=p;
                a-= 2*p;
                b-= p;
                cnt+= ((a+b)/3);
            }
        }

        cout << cnt << endl;
    }
    return 0;
}


