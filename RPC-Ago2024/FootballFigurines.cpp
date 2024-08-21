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

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, q, s, t, f1 = 1, f2 = 2, fib;
    vll memo;
    cin >> n >> q;
    memo.assign(n+5, 0);
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 3;
    ffor(i, 3, n){
        fib = (f1%INF + f2%INF)%INF;
        memo[i] = (memo[i-1]%INF + memo[i-2]%INF + fib%INF)%INF; 
        f1 = f2;
        f2 = fib;
    }
    ffor(i, 0, q){
        cin >> s >> t;
        cout << memo[t-s] << endl;
    }
    return 0;
}