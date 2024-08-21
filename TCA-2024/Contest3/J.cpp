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
    ll n, k, a;
    vll v;
    string s;
    cin >> n >> k;
    ffor(i, 0, n){
        cin >> a, v.pb(a);
    }
    cin >> s;
    a = 1;
    vll vv;
    ffor(i, 1, n){
        if(s[i] == s[i-1]) a++;
        else vv.pb(a), a = 1;
    }
    vv.pb(a);
    a = 0;
    ll pos = 0, ans = 0;
    while(pos < vv.size()){
        if(vv[pos] <= k){
            ffor(i, a, a+vv[pos]) ans += v[i];
        }
        else{
            vll aux;
            ffor(i, a, a+vv[pos]) aux.pb(v[i]);
            sort(all(aux));
            reverse(all(aux));
            ffor(i, 0, k) ans += aux[i];
        }
        a += vv[pos];
        pos++;
    }
    cout << ans << endl;
    return 0;
}