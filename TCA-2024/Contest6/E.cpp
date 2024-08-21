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
    ll n, a, ans = 0, p, aux;
    vll v, vans;
    set<ll> s;
    cin >> n;
    ffor(i, 0, n) cin >> a, s.insert(a+1e9);
    for(auto it = s.begin(); it != s.end(); it++){
        p = 0;
        while(*it + (1ll<<p) <= 1e10){
            aux = 1;
            v.clear();
            v.pb(*it - 1e9);
            if(s.count(*it + (1ll<<p))) aux++, v.pb(*it + (1ll<<p) - 1e9);
            if(s.count(*it - (1ll<<p))) aux++, v.pb(*it - (1ll<<p) - 1e9);
            if(aux > ans) vans = v, ans = aux;
            if(ans == 3) break;
            p++;
        }
        if(ans == 3) break;
    }
    cout << ans << endl;
    ffor(i, 0, ans) cout << vans[i] << " ";
    cout << endl;
    return 0;
}