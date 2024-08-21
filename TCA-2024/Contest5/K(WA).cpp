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

ll n, t, d, a, dant, in = 0;

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    cin >> t;
    while(t--){
        cin >> n;
        a = n-1;
        in = 2;
        cout << 1 << " " << a << " " << 1 << " ";
        ffor(i, 2, a+2) cout << i << " ";
        cout << endl;
        cout.flush();
        cin >> d;
        a /= 2;
        while(a >= 1){
            cout << 1 << " " << a << " " << 1 << " ";
            ffor(i, in, in+a) cout << i << " ";
            cout << endl;
            cout.flush();
            dant = d;
            cin >> d;
            if(d != dant) in += a; 
            a = a/2;
        }
        cout << 1 << " " << n-1 << " " << in << " ";
        ffor(i, 1, n+1) if(i != in) cout << i << " "; 
        cout << endl;
        cout.flush();
        cin >> d;
        cout << -1 << " " << d << endl;
        cout.flush();
    }
    return 0;
}