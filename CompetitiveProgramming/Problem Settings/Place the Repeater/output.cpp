#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("finalSubtask2.in","r",stdin);
    freopen("finalSubtask2.out","w",stdout);
    int t;
    cin >> t;
    while(t--)
    {
        double xt,yt,x,y;
        double k;
        cin >> xt >> yt >> x >> y >> k;
        double divisionAngle = (2.0*PI)/k;
        double squareDist = ((x-xt)*(x-xt))+((y-yt)*(y-yt));
        double radius = sqrt(squareDist);
        cout << fixed << setprecision(8) ;
        double primaryAngle = atan2((y-yt),(x-xt));

        vector<pair<double,double>>result;
        if(k==2)
        {
            cout << 2*xt - x << ' ' << 2*yt - y << endl;
        }
        else if(k==3)
        {
            cout << radius*cos(primaryAngle + divisionAngle) + xt  << ' ' << radius*sin(primaryAngle + divisionAngle) + yt << endl;
            cout << radius*cos(primaryAngle + 2*divisionAngle) + xt  << ' ' << radius*sin(primaryAngle + 2*divisionAngle) + yt << endl;
        }
        else
        {
            for(int i=1; i<k; i++)
            {
                cout << radius*cos(primaryAngle + i*divisionAngle) + xt  << ' ' << radius*sin(primaryAngle + i*divisionAngle) + yt << endl;
            }
        }
    }
}

