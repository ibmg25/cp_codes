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

ll la, n, a[55];
ll memo[55][55];

ll dp(ll l, ll r){
    if(l+1 == r) return 0;
    if(memo[l][r] != -1) return memo[l][r];
    ll ans = 1e9;
    ffor(i, l+1, r) ans = min(ans, dp(l, i) + dp(i, r) + (a[r]-a[l]));
    return memo[l][r] = ans;
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    while(cin >> la && la != 0){
        cin >> n;
        a[0] = 0;
        ffor(i, 1, n+1) cin >> a[i];
        a[n+1] = la;
        mem(memo, -1);
        cout << "The minimum cutting is " << dp(0, n+1) << "." << endl;
    }
    return 0;
}
