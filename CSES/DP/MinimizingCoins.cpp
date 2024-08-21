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

vll memo(1e6+5, -1);
ll n, c[105];

ll dp(ll x){
    if(x < 0) return 1e9;
    if(x == 0) return 0;
    if(memo[x] != -1) return memo[x];
    ll ans = 1e9;
    ffor(i, 0, n) ans = min(ans, 1+dp(x-c[i]));
    return memo[x] = ans;
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll x;
    cin >> n >> x;
    ffor(i, 0, n) cin >> c[i];
    if(dp(x) == 1e9) cout << -1 << endl;
    else cout << dp(x) << endl;
    return 0;
}
