/** بسم الله الرحمن الرحيم **/


#include <bits/stdc++.h>

#define gc getchar unlocked
#ifndef ONLINE JUDGE
#define gc getchar
#endif // ONLINE JUDGE

#define pc putchar_unlocked
#ifndef ONLINE JUDGE
#define pc putchar
#endif // ONLINE JUDGE

#define fRead           freopen("input.txt","r",stdin)
#define fWrite          freopen ("output.txt","w",stdout)

#define eps             1e-8
#define inf             0x3f3f3f3f
#define INF             2e18
#define LL              long long
#define ULL             unsigned long long
#define PI              acos(-1.0)
#define pb              push_back
#define mk              make_pair
#define pii             pair<int,int>
#define pLL             pair<LL,LL>
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define rall(a)         a.rbegin(),a.rend()
#define SQR(a)          ((a)*(a))
#define Unique(a)       sort(all(a)),a.erase(unique(all(a)),a.end())
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define max4(a,b,c,d)   max(max(a,b),max(c,d))
#define min5(a,b,c,d,e) min(min3(a,b,c),min(d,e))
#define rIterator(a)    __typeof__(a.rbegin())
#define max5(a,b,c,d,e) max(max3(a,b,c),max(d,e))
#define Iterator(a)     __typeof__(a.begin())
#define rFOR(a,it)      for(rIterator(a) it = a.rbegin();it != a.rend(); it++)
#define FOR(a,it)       for(Iterator(a) it = a.begin();it != a.end(); it++)
#define CasePrint       pc('C'); pc('a'); pc('s'); pc('e'); pc(' '); write(qq++,false); pc(':'); pc(' ')
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)

using namespace std;

#define scani2(a,b) scani(a) , scani(b)
#define scani3(a,b,c) scani(a), scani(b), scani(c)
#define scani4(a,b,c,d) scani(a), scani(b), scani(c), scani(d)
#define scani5(a,b,c,d,e) scani(a), scani(b), scani(c), scani(d) , scani(e)
template <typename T> T scani(T &n){n = 0;bool negative = false;char c = gc();while( c < '0' || c > '9'){if(c == '-') negative = true;c = gc();}while(c >= '0' && c <= '9'){n = n*10 + c-48;c = gc();}if(negative) n = ~(n-1);return n;}
template <typename T> void write(T n,int type = true){if(n<0) {pc('-');n = -n;}if(!n) {pc('0');if(type==32) pc(' '); else if(type) pc('\n'); return;}char buff[22];int len = 0;while(n) buff[len++] = n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);if(type==32) pc(' '); else if(type) pc('\n');}
int scans(char *a){int i=0;char c = 0;while(c < 33) c = gc();while(c > 33){a[i++] = c;c = gc();}a[i] = 0;return i;}
/*---------------------------fast I/O------------------------------------*/

const int MOD = 1e9 + 7;

int fy[] = {+0,+0,+1,-1,+1,-1,+1,-1,+0};
int fx[] = {+1,-1,+0,+0,+1,+1,-1,-1,+0};
template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
template <typename T> inline T InvMod (T A,T M = MOD){return BigMod(A,M-2,M);}
template <typename T> inline T BigMod(T A,T B,T M = MOD){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b); if(a < b) swap(a, b); while ( b ) { a = a % b; swap ( a, b ); } return a;}
/*********************************************** End of template *********************************************/

vector <int> in;
int n,x;

bool ck(int add)
{
    vector <int> vv(all(in));
    while(add--) vv.pb(x);
    sort(all(vv));
    int siz = vv.size();
    return vv[(siz - 1) >> 1] == x;
}

int main()
{
    scani2(n, x);
    for(int i=0;i<n;i++){
        int tp;
        in.pb(scani(tp));
    }
    int low,high,mid,ans;
    low = 0;
    high = 555;
    while(low <= high){
        mid = (low + high) >> 1;
        if(ck(mid)){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    write(ans);
    return 0;
}
