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

vector<vector<ll> > memo(1e6+5, vll(7, -1));

ll dp(ll n, ll d){
    if(n < 0) return INF;
    if(n == 0) return 0;
    if(memo[n][d] != -1) return memo[n][d];
    ll ans = INF, c = 0, aux = n;
    while(aux >= 1){
        if(aux%10 == 0){ aux /= 10; continue; }
        ans = min(ans, 1+dp(n-aux%10, c));
        c++;
        aux /= 10;
    }
    return memo[n][d] = ans;
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n;
    cin >> n;
    cout << dp(n, 0) << endl;
    return 0;
}