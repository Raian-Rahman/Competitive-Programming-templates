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
        long long n;
        cin >> n;
        long long arr[n+100];
        for(long long i=0;i<n;i++)    cin >> arr[i];
        long long f=1;
        long long l=00,r=0;
        vector<long long>v;
        if(arr[0]<arr[1])   f=1;
        else            f=0;
       // cout << f << endl;
       v.push_back(arr[0]);
        for(long long i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1] and f==1)
            {
                v.push_back(arr[i-1]);
                f=0;
            }
            else if(arr[i]>arr[i-1] and f==0)
            {
                v.push_back(arr[i-1]);
                f=1;
            }
        }
        //cout << l << endl;
        v.push_back(arr[n-1]);
        cout << v.size() << endl;
        for(long long i=0;i<v.size();i++) cout << v[i] << ' ';
        cout << endl;
    }

    return 0;
}



