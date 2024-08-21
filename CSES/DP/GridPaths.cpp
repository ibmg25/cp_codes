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

char m[1005][1005];
vector<vll> dp(1e3+5, vll(1e3+5, 0));

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n;
    cin >> n;
    ffor(i, 0, n){
        ffor(j, 0, n) cin >> m[i][j];
    }
    if(m[0][0] == '.') dp[0][0] = 1;
    ffor(i, 0, n){
        ffor(j, 0, n){
            if(m[i][j] == '*') continue;
            if(i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % INF;
            if(j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % INF;
        }
    }
    cout << dp[n-1][n-1] << endl;
    return 0;
}