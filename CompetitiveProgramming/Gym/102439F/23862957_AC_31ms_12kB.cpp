#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL)
#define PI acos(-1.0)
#define TEST(n) cout<<"dhukse"<<n<<'\n'
#define endl '\n'
#define FILEREAD freopen("input.txt","r",stdin)
#define FIXED(n) cout << fixed << setprecision(n);
#define CASE(n) cout<<"Case " << n << ": ";
long long Set(long long N,long long pos){ return N=N | (1<<pos);}
long long reset(long long N,long long pos){return N= N & ~(1<<pos);}
bool check(long long N,long long pos){return (bool)(N & (1<<pos));}
long long min(long long a, long long b){if(a<b)return a;else return b;}
long long max(long long a, long long b){if(a>b)return a;else return b;}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////In the name of almighty ALLAH/////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Coded By: pranonrahman////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //FAST;
    long long t=1;
   // cin >> t;
    while(t--)
    {
        long long unsigned x;
        cin >> x;
        long long unsigned p=2;
        for(int i=1;i<64;i++)
        {
            if(p==x or p+1==x)    
            {
                cout << "Yes\n";
                return 0;
            }
            p*=2;
        }
 cout << "No\n";
    }

    return 0;
}
