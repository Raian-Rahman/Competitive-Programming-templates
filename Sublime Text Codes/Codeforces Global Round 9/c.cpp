//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


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
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        int n,x,y;
        cin >> n ;
        for(int i=0;i<n;i++)
        {
            int tt;
            cin >> tt;
            if(i==0)    x=tt;
            else if(i==n-1) y=tt;
            else    continue;
        }
        if(x<y) cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}


