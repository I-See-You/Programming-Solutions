#include <bits/stdc++.h>
using namespace std;

set <int> st[100005];
int color[100005];
bool good[100005];

int main()
{
    int n,m;
    int limit = 0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&color[i]) , good[color[i]] = true , limit = max(limit , color[i]) ;
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(color[x] == color[y]) continue;
        st[color[x]].insert(color[y]);
        st[color[y]].insert(color[x]);
    }
    int mx = 0;
    int ans = -1;
    for(int i=limit;i>0;i--){
        if(!good[i]) continue;
        int tp = st[i].size();
//        cout << i << ' ' << color[i] << ' ' << tp << endl;
        if(tp >= mx){
            mx = tp;
            ans = i;
        }
    }
    printf("%d\n",ans);
    return 0;

}
