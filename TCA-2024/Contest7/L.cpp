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
    ll n, x, pos;
    cin >> n >> x;
    if(x >= n){
        cout << -1 << endl;
        return 0;
    }
    vector<vll> p, s;
    p.assign(2020, vll());
    s.assign(2020, vll());
    ffor(i, 1, n+1){
        ffor(j, 1, x+1) p[i].pb((i-1)*x + j);
        ffor(j, 1, x+1){
            pos = i+j;
            if(pos > n) pos -= n;
            s[pos].pb((i-1)*x+j);
        }
    }
    ffor(i, 1, n+1){
        ffor(j, 0, x) cout << p[i][j] << " ";
        ffor(j, 0, x) cout << s[i][j] << " ";
        cout << endl;
    }
    return 0;
}