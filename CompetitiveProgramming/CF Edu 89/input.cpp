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
    freopen("input.txt","w",stdout);
    long long t=1;
    cin >> t;
    long long T = t;
    cout << t << endl;
    srand(1);
    while(t--)
    {
        //write your code here
        cout << 30 << ' ' << 30 << endl;
        for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            {
                cout << rand()%2 << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}



