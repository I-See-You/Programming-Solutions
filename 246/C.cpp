#include <bits/stdc++.h>
using namespace std;

int in[1001];

int main()
{
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> in[i];
    sort(in,in+n);
    for(int i=0;i<n && k;i++){
        for(int j=0;j+i<n && k;j++,k--){
            cout << i + 1;
            for(int p=0;p<i;p++) cout << ' ' << in[n - 1 - p];
            cout << ' ' << in[j] << endl;
        }
    }
    return 0;
}
