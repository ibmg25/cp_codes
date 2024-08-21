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

ll m, c, k, a;
ll memo[25][205];
vector<vll> p;

ll dp(ll g, ll rm){
    if(rm < 0) return -INF;
    if(g == c) return m-rm;
    if(memo[g][rm] != -1) return memo[g][rm];
    ll ans = -1;
    ffor(i, 0, p[g].size()){
        ans = max(ans, dp(g+1, rm - p[g][i]));
    }
    return memo[g][rm] = ans;
}

void solve(){
    cin >> m >> c;
    p.assign(c, vll());
    ffor(i, 0, c){
        cin >> k;
        ffor(j, 0, k) cin >> a, p[i].pb(a);
    }
    if(dp(0, m) < 0) cout << "no solution" << endl;
    else cout << dp(0, m) << endl;
    
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n;
    cin >> n;
    while(n--){ 
        mem(memo, -1);
        p.clear();
        solve();
    }
    return 0;
}