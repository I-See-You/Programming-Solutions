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
template <typename T> bool scani(T &n){n = 0;bool got = false;bool negative = false;char c = gc();while( c < '0' || c > '9'){if(c == '-') negative = true;c = gc();}while(c >= '0' && c <= '9'){got = true;n = n*10 + c-48;c = gc();}if(negative) n = ~(n-1);return got;}
template <typename T> void write(T n,bool line = true){if(n<0) {pc('-');n = -n;}if(!n) {pc('0');if(line) pc('\n');return;}char buff[22];int len = 0;while(n) buff[len++] = n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);if(line) pc('\n');}
int scans(char *a){int i=0;char c = 0;while(c < 33) c = gc();while(c > 33){a[i++] = c;c = gc();}a[i] = 0;return i;}
/*********************************************** End of template *********************************************/

struct data
{
    int id;
    int solved;
    int submitted;
    int points;
}T[12];

int Qp[12];


bool comp(data x,data y)
{
    if(x.points != y.points) return x.points > y.points;
    if(x.solved != y.solved) return x.solved < y.solved;
    if(x.submitted != y.submitted) return x.submitted < y.submitted;
    return x.id < y.id;
}


string names[3] =  { "Carrots" , "Kiwis" , "Grapes" };
int waste[1003];

int main()
{
    int n,m,k,t;
    scani4(n,m,k,t);
    for(int i=0;i<k;i++){
        int x,y;
        scani2(x,y);
        int point = (x - 1) * m + y - 1;
        waste[i] = point;
    }
    waste[k++] = n * m + 10;
    sort(waste,waste+k);
    for(int i=0;i<t;i++){
        int x,y;
        scani2(x,y);
        int point = (x - 1) * m + (y - 1);
        int id = lower_bound(waste,waste+k,point) - waste;
        if(point == waste[id]) puts("Waste");
        else puts(names[(point - id) % 3].c_str());
    }
    return 0;
}







