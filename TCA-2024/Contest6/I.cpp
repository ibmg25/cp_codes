#include <bits/stdc++.h>
//#include <ext/rope>
 
using namespace std;
//using namespace __gnu_cxx;
 
#define ffor(i,o,f)        for(int i = o; i < f; i++)
#define bfor(i,f,o)        for(int i = f; i >= o; i--)
#define pb                 push_back
#define pf                 push_front
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI                 acos(-1)
#define endl               '\n'
#define lcm(a,b)           (a*b)/__gcd(a,b)
#define mem(a, h)          memset(a, (h), sizeof(a))
#define setp(a)            fixed << setprecision(a)
typedef long long          ll;
typedef long double        ld;  
typedef pair < ll, ll >    pll;
typedef vector < ll >      vll;
const int INF = int(1e9 + 7);
const int MOD = 998244353;
const double EPS = double(1e-9);
const int TAM = 200005;

ll n, k, m, au, x, bu;
string s;
vll v;
map<string, ll> ms;
ll uf[100005];

void init(){
    ffor(i, 0, 100003) uf[i] = i;
}

ll Find(ll a){
    if(uf[a] == a) return a;
    return uf[a] = Find(uf[a]);
}

void Union(ll a, ll b){
    ll A = Find(a);
    ll B = Find(b);
    if(A != B) uf[A] = uf[B], v[B] = min(v[A], v[B]);
}

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    cin >> n >> k >> m;
    init();
    ffor(i, 0, n) cin >> s, ms[s] = i+1;
    v.pb(-1);
    ffor(i, 0, n) cin >> au, v.pb(au);
    ffor(i, 0, k){
        cin >> x;
        cin >> au;
        ffor(j, 1, x) cin >> bu, Union(au, bu);
    }
    ll ans = 0;
    ffor(i, 0, m){
        cin >> s;
        ans += v[Find(ms[s])];
    }
    cout << ans << endl;
    return 0;
}