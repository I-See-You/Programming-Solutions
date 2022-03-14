#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ser=0,dim=0,m,i;
    cin>>n;
    int a[n],j=0,k=n-1;

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        m=max(a[j],a[k]);

        if(m==a[j])
            j++;
        else
            k--;

        if(i%2==0) ser+=m;
        else dim+=m;
    }
    cout<<ser<<' '<<dim<<endl;
    return 0;
}
