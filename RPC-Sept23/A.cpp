#include <bits/stdc++.h>
//#include <ext/rope>
 
using namespace std;
//using namespace __gnu_cxx;
 
#define ffor(i,o,f)        for(int i = o; i < f; i++)
#define bfor(i,f,o)        for(int i = f; i >= o, i--)
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
typedef pair < int, int >  pii;
typedef pair < ll, ll >    pll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi >      gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);
const int MOD = 998244353;
const double EPS = double(1e-9);
const int tam = 200005;

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int n;
    cin >> n;
    bool div = false, cont = false;
    if (n%7 == 0)
        div = true;
    while(n >= 1){
        if (n%10 == 7)
            cont = true;
        n /= 10;
    }
    if (!div && !cont)
        cout << 0 << endl;
    else if (!cont)
        cout << 1 << endl;
    else if (!div)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}