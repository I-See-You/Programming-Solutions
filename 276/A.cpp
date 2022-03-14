#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,f,t,i,m;
    cin>>n>>k;
    cin>>f>>t;
    m = f - (t>k)*(t-k);
    for(i=1;i<n;i++)
    {
        cin>>f>>t;
        m = max(m,f - (t>k)*(t-k));
    }
    cout<< m <<endl;
    return 0;
}
