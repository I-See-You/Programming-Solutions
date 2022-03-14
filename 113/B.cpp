#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;


#define gc getchar unlocked
#ifndef ONLINE JUDGE
#define gc getchar
#endif // ONLINE JUDGE

#define pc putchar_unlocked
#ifndef ONLINE JUDGE
#define pc putchar
#endif // ONLINE JUDGE

#define fRead           freopen("input.txt","r",stdin)
#define fWrite          freopen("output.txt","w",stdout)

#define eps             1e-9
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
#define max5(a,b,c,d,e) max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e) min(min3(a,b,c),min(d,e))
#define Iterator(a)     __typeof__(a.begin())
#define rIterator(a)    __typeof__(a.rbegin())
#define FOR(a,it)       for(Iterator(a) it = a.begin();it != a.end(); it++)
#define rFOR(a,it)      for(rIterator(a) it = a.rbegin();it != a.rend(); it++)
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)
#define CasePrint       pc('C'); pc('a'); pc('s'); pc('e'); pc(' '); write(qq++,false); pc(':'); pc(' ')
#define vi              vector <int>
#define vL              vector <LL>
#define For(I,A,B)      for(int I = (A); I  < (B); ++I)
#define rFor(I,A,B)     for(int I = (A); I >= (B); --I)
#define Rep(I,N)        For(I,0,N)
#define REP(I,N)        For(I, 1, N + 1)
#define gti             int, vi, greater<int>
#define gtL             LL, vL, greater<LL>
#define Found(a, b)     a.find(b) != a.end()

const int MOD = 1e9 + 7;
int fx[] = {-1,+0,+1,+0,+1,+1,-1,-1,+0};
int fy[] = {+0,-1,+0,+1,+1,-1,+1,-1,+0};
int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//template <typename T> using orderset = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>; // find_by_order, order_of_key
template <typename T> inline bool isLeap(T y) {return (y % 400 == 0) || (y % 100 ? y % 4 == 0 : false); }
template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b); if(a < b) swap(a, b); while ( b ) { a = a % b; swap ( a, b ); } return a;}
template <typename T> inline T EGCD(T a,T b,T &x,T &y){if(a == 0) {x = 0;y = 1;return b;}T x1, y1;T d = EGCD(b % a, a, x1, y1);x = y1 - (b / a) * x1;y = x1;return d;}
template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
template <typename T> inline T BigMod(T A,T B,T M = MOD){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
template <typename T> inline T InvMod (T A,T M = MOD){return BigMod(A,M-2,M);}
//template <typename T> void Compress(T * in, int n){vector <T> vv;for(int i = 0; i < n; i++) vv.pb(in[i]);Unique(vv);for(int i = 0; i < n; i++) in[i] = lower_bound(all(vv), in[i]) - vv.begin();}
//template <typename T> void Compress(vector <T> &in){vector <T> vv;for(T x : in) vv.pb(x);Unique(vv);for(int i = 0; i < in.size(); i++) in[i] = lower_bound(all(vv), in[i]) - vv.begin();}
/*---------------------------fast I/O------------------------------------*/
#define scani2(a,b) scani(a) , scani(b)
#define scani3(a,b,c) scani(a), scani(b), scani(c)
#define scani4(a,b,c,d) scani(a), scani(b), scani(c), scani(d)
#define scani5(a,b,c,d,e) scani(a), scani(b), scani(c), scani(d) , scani(e)
template <typename T> T scani(T &n){n = 0;bool negative = false;char c = gc();while( c < '0' || c > '9'){if(c == '-') negative = true;c = gc();}while(c >= '0' && c <= '9'){n = n*10 + c-48;c = gc();}if(negative) n = ~(n-1);return n;}
template <typename T> void write(T n,int type = true){if(n<0) {pc('-');n = -n;}if(!n) {pc('0');if(type==32) pc(' '); else if(type) pc('\n'); return;}char buff[22];int len = 0;while(n) buff[len++] = n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);if(type==32) pc(' '); else if(type) pc('\n');}
int scans(char *a){int i=0;char c = 0;while(c < 33) c = gc();while(c > 33){a[i++] = c;c = gc();}a[i] = 0;return i;}
/*********************************************** End of template *********************************************/
#define Z_Algo

#ifdef Sieve
const int pSz = 2000006;
bool np[pSz + 10]; vi prime; int prime_size;void sieve(){np[0] = np[1] = 1;prime.pb(2);for(LL i = 4; i <= pSz; i+=2) np[i] = 1;for(LL i = 3; i <= pSz; i+=2){if(!np[i]){prime.pb(i);for(LL j = i * i; j <= pSz; j += (i << 1)) np[j] = 1;}}prime_size = prime.size();}
#endif

#ifdef Combi
const int nSz = 2000006;
LL F[nSz + 1], tMod = MOD;
void Factorial(){ F[0] = 1; for(int i = 1; i <= nSz; i++) F[i] = (F[i - 1] * i) % tMod; }
inline LL nCr(int n, int r) { return (F[n] * InvMod((F[n - r] * F[r]) % tMod, tMod)) % tMod; }
#endif

#ifdef Z_Algo
void zAlgo(char *s, int *z){
    int L, R, sz; sz = strlen(s); z[0] = L = R = 0;
    For(i, 1, sz) { z[i] = 0; if(i <= R) z[i] = min(z[i - L], R - i + 1); while(i + z[i] < sz && s[i + z[i]] == s[z[i]]) z[i]++; if(i + z[i] - 1 > R) L = i, R = i + z[i] - 1; }
}void zAlgo(string &s, int *z){
    int L, R, sz; sz = s.size(); z[0] = L = R = 0;
    For(i, 1, sz) { z[i] = 0; if(i <= R) z[i] = min(z[i - L], R - i + 1); while(i + z[i] < sz && s[i + z[i]] == s[z[i]]) z[i]++; if(i + z[i] - 1 > R) L = i, R = i + z[i] - 1; }
}void zAlgo(int *s, int *z, int n){
    int L, R, sz; sz = n; z[0] = L = R = 0;
    For(i, 1, sz) { z[i] = 0; if(i <= R) z[i] = min(z[i - L], R - i + 1); while(i + z[i] < sz && s[i + z[i]] == s[z[i]]) z[i]++; if(i + z[i] - 1 > R) L = i, R = i + z[i] - 1; }
}
#endif // Z_Algo


/********************************************* define Template *************************************************/

template <typename T> inline T SqrDis(T x1, T y1, T x2, T y2){return SQR(x1 - x2) + SQR(y1 - y2);}
template <typename T> inline T Area2(T Ax, T Ay, T Bx, T By, T Cx, T Cy){T ret = Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By);
    if(ret < 0) return ret = -ret;
    return ret;
}
/**************************************************** GEO ******************************************************/
const int N = 2000006;
const int M = 44444;
const ULL hs = 3797;

int n, stp, sfxMv, sfx[M], tmp[M];
int sfxSum[M], sfxCnt[M], Rank[22][M];
int lcp[M], rnk[M], Mc[M][22];

string in, a, b, s;
int na, nb, sp[M], ep[M], za[M], zb[M];

inline bool equal(const int &u, const int &v){
    if(!stp) return in[u] == in[v];
    if(Rank[stp-1][u] != Rank[stp-1][v]) return false;
    int a = u + sfxMv < n ? Rank[stp-1][u+sfxMv] : -1;
    int b = v + sfxMv < n ? Rank[stp-1][v+sfxMv] : -1;
    return a == b;
}

void update(){
    int i, rnk;
    for(i = 0; i < n; i++) sfxSum[i] = 0;
    for(i = rnk = 0; i < n; i++) {
        sfx[i] = tmp[i];
        if(i && !equal(sfx[i], sfx[i-1])) {
            Rank[stp][sfx[i]] = ++rnk;
            sfxSum[rnk+1] = sfxSum[rnk];
        }
        else Rank[stp][sfx[i]] = rnk;
        sfxSum[rnk+1]++;
    }
}

void Sort() {
    int i;
    for(i = 0; i < n; i++) sfxCnt[i] = 0;
    memset(tmp, -1, sizeof tmp);
    for(i = 0; i < sfxMv; i++){
        int idx = Rank[stp - 1][n - i - 1];
        int x = sfxSum[idx];
        tmp[x + sfxCnt[idx]] = n - i - 1;
        sfxCnt[idx]++;
    }
    for(i = 0; i < n; i++){
        int idx = sfx[i] - sfxMv;
        if(idx < 0)continue;
        idx = Rank[stp-1][idx];
        int x = sfxSum[idx];
        tmp[x + sfxCnt[idx]] = sfx[i] - sfxMv;
        sfxCnt[idx]++;
    }
    update();
    return;
}

inline bool cmp(const int &a, const int &b){
    if(in[a]!=in[b]) return in[a]<in[b];
    return false;
}


void suffixArray() {
    int i;
    for(i = 0; i < n; i++) tmp[i] = i;
    sort(tmp, tmp + n, cmp);
    stp = 0;
    update();
    ++stp;
    for(sfxMv = 1; sfxMv < n; sfxMv <<= 1) {
        Sort();
        stp++;
    }
    stp--;
    for(i = 0; i <= stp; i++) Rank[i][n] = -1;
//        Rep(i, n) { For(j, sfx[i], n) printf("%c", in[j]); pc('\n'); }
}



void kasai() {
    Rep(i, n) rnk[ sfx[i] ] = i;
    for(int i = 0, k = 0; i < n; i++, k ? k-- : 0) {
        if(rnk[i] == n - 1) {
            k = 0;
            continue;
        }
        int j = sfx[ rnk[i] + 1 ];
        while(i + k < n && j + k < n && in[i + k] == in[j + k]) k++;
        lcp[ rnk[i] + 1 ] = k;
    }
}

void sparsTable() {
    for(int i = 0; i < n; i++) Mc[i][0] = lcp[i];
    for(int j = 1; (1 << j) <= n; j++) for(int i = 0; i + (1 << j) <= n; i++) Mc[i][j] = min( Mc[i][j - 1], Mc[i + (1 << (j - 1))][j - 1] );
}

int lcpMatch(int x, int y) {
    x = Rank[stp][x];
    y = Rank[stp][y];
    if(x == y) return n - sfx[x];
    if(x > y) swap(x, y);
    int k = log2(y - x);
    return min( Mc[x][k], Mc[y - (1 << k)][k] );
}

int lcpMatchSlow(int x, int y) {
    if(x == y) return n - x;
    int ret = 0;
    for(int i = stp; i >= 0 && x < n && y < n; i--) {
        if(Rank[i][x] == Rank[i][y]) {
            x += (1 << i);
            y += (1 << i);
            ret += (1 << i);
        }
    }
    return ret;
}

int main()
{
    FastRead;
    int l = inf, r = -inf, res = 0;
    cin >> in >> a >> b;
    n = in.size();
    na = a.size();
    nb = b.size();

    s = a + in; zAlgo(s, za);
    s = b + in; zAlgo(s, zb);

    For(i, na, na + n) if(za[i] >= na) sp[i - na] = 1, l = min(l, i - na);
    For(i, nb, nb + n) if(zb[i] >= nb) ep[i - 1] = 1 , r = max(r, i - 1) ;

//    Rep(i, n) cerr << sp[i]; cerr << '\n';
//    Rep(i, n) cerr << ep[i]; cerr << '\n';

    suffixArray();
    kasai();

    Rep(i, n) {
        if(!sp[ sfx[i] ]) continue;
        int j = sfx[i] + max3(lcp[i], na - 1, nb - 1);
        while(j < n) res += ep[j++];
    }
    cout << res << '\n';

    return 0;
}
