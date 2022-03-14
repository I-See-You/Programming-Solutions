#include <bits/stdc++.h>

#define gc getchar unlocked
#ifndef ONLINE JUDGE
#define gc getchar
#endif // ONLINE JUDGE

#define pc putchar_unlocked
#ifndef ONLINE JUDGE
#define pc putchar
#endif // ONLINE JUDGE

#define eps 1e-8
#define inf 0x3f3f3f3f
#define INF 2e18
#define LL long long
#define ULL unsigned long long
#define PI acos(-1.0)
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
#define pLL pair<LL,LL>
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define SQR(a) ((a)*(a))
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())

using namespace std;

const int MOD = 1e9 + 7;
int fx[] = {+1,-1,+0,+0,+1,+1,-1,-1,+0};
int fy[] = {+0,+0,+1,-1,+1,-1,+1,-1,+0};
template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b);while ( b ) { a = a % b; swap ( a, b ); } return a;}
template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
/*---------------------------fast I/O------------------------------------*/
#define scani2(a,b) scani(a) , scani(b)
#define scani3(a,b,c) scani(a), scani(b), scani(c)
#define scani4(a,b,c,d) scani(a), scani(b), scani(c), scani(d)
template <typename T> void scani(T &n){n = 0;bool negative = false;char c = gc();while( c < '0' || c > '9'){if(c == '-') negative = true;c = gc();}while(c >= '0' && c <= '9'){n = n*10 + c-48;c = gc();}if(negative) n = ~(n-1);}
template <typename T> void write(T n,bool line = true){if(n<0) {pc('-');n = -n;}if(!n) {pc('0');if(line) pc('\n');return;}char buff[22];int len = 0;while(n) buff[len++] = n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);if(line) pc('\n');}
int scans(char *a){int i=0;char c = 0;while(c < 33) c = gc();while(c > 33){a[i++] = c;c = gc();}a[i] = 0;return i;}
/*********************************************** End of template *********************************************/

int ans_me(int x)
{
    int buff[15];
    int tp = 0;
    while(x){
        buff[tp++] = x % 10;
        x = x / 10;
    }
    reverse(buff,buff+tp);
    int ret = 0;
    for(int i=0;i<tp;i++){
        if(buff[i] == 0) continue;
        ret = ret * 10 + buff[i];
    }
    return ret;
}

int main()
{
    int x,y;
    int a,b;
    cin >> x >> y;
    a = ans_me(x + y);
    x = ans_me(x);
    y = ans_me(y);
    b = x + y;
//    b = ans_me(b);
    if(a == b) cout << "YES";
    else cout << "NO";
    return 0;
}



