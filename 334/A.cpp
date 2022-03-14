#include<bits/stdc++.h>
using namespace std;
#define sqr(a) a*a
int main()
{
    int n,i,j,s,k=1;
    cin>>n;
    s = sqr(n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            cout << k << " " << s-k+1 << " ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
