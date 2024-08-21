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

vector<vll> dp(1e5+5, vll(105, 0));
ll v[100005];
 
int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, m;
    cin >> n >> m;
    ffor(i, 0, n) cin >> v[i];
    if(v[0] != 0) dp[0][v[0]] = 1;
    else ffor(i, 1, m+1) dp[0][i] = 1;
    ffor(i, 1, n){
        if(v[i] != 0){
            dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][v[i]])%INF;
            if(v[i] > 1) dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][v[i]-1])%INF;
            if(v[i] < m) dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][v[i]+1])%INF;
        }
        else{
            ffor(j, 1, m+1){
                dp[i][j] = (dp[i][j] + dp[i-1][j])%INF;
                if(j > 1) dp[i][j] = (dp[i][j] + dp[i-1][j-1])%INF;
                if(j < m) dp[i][j] = (dp[i][j] + dp[i-1][j+1])%INF;
            }
        }
    }
    ll ans = 0;
    ffor(i, 1, m+1) ans = (ans + dp[n-1][i])%INF;
    cout << ans << endl;
    return 0;
}