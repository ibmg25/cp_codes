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
    ll a, b, c, x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    a -= x;
    b -= y;
    c -= z;
    if(a < 0 && b < 0 && c < 0) cout << "No" << endl;
    else if(a >= 0 && b >= 0 && c >= 0) cout << "Yes" << endl;
    else if(a >= 0 && b >= 0 && c < 0){
        if(a/2 + b/2 >= -c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(a >= 0 && c >= 0 && b < 0){
        if(a/2 + c/2 >= -b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(c >= 0 && b >= 0 && a < 0){
        if(c/2 + b/2 >= -a) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(a >= 0 && b < 0 && c < 0){
        if(a/2 >= -b  - c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(b >= 0 && a < 0 && c < 0){
        if(b/2 >= -a - c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(c >= 0 && b < 0 && a < 0){
        if(c/2 >= -b  - a) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}