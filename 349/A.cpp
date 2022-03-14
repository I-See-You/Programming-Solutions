#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,i,x25=0,x50=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==25) x25++;
        if(x==50)
        {
            x50++;
            x25--;
        }
        if(x==100)
        {
            if(x50>0 ) x50-- , x25--;
            else x25 = x25-3;
        }
        if(x25<0 || x50 <0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout<< "YES\n";
    return 0;
}
