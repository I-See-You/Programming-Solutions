#include<bits/stdc++.h>
using namespace std;
int worm_count [1000000],worm_index [1000000],n,i,j,k=0,m,s=0,test;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        s+=m;
        worm_count[k++]+= s;
    }
    cin>>test;
    for(i=0;i<test;i++)
        cin>>worm_index[i];
    vector <int> v(worm_count,worm_count+n);
    for(i=0;i<test;i++)
    {
       cout<< lower_bound (v.begin(),v.end(),worm_index[i]) - v.begin() + 1 <<endl;
    }
    return 0;
}
