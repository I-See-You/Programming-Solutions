#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m=20,j,s;
    cin>>n;
    string s1,s2;
    cin>>s1;
    for(i=1;i<n;i++)
    {
         s=0;
         cin>>s2;
         for(j=0;j<s1.length();j++)
         {
             if(s1[j]!=s2[j])
             {
                 break;
             }
             s++;
         }
             swap(s1,s2);
             m=min(s,m);

     }
     cout<<m<<endl;
     return 0;
 }
