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

ld get_angle(ld x, ld y){
    if(x < 0) x*=-1;
    return (atan(y/x)*180)/PI;
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);

    ld a, b, r;
    cin >> a >> b >> r;

    ld beta = 2*((a*a)/b);
    ld alpha =  ((a*a)/(b*b)) + 1.0;
    ld omega = a*a - r*r;

    ld ra = beta*beta - 4*alpha*omega;

    if(ra < 0){
        cout << -1 << endl;
        return 0;
    }

    ld x1 = (beta + sqrt(ra) )/(2*alpha);
    ld x2 = (beta - sqrt(ra) )/(2*alpha);

    ld y1 = -a/b * x1 + a;
    ld y2 = -a/b * x2 + a;

    ld angle1 = get_angle(x1, y1);
    ld angle2 = get_angle(x2, y2);    

    if(y1 < 0 && y2 < 0 ){
        cout << -1 << endl;
        return 0;
    }

    cout << fixed << setprecision(8);

    if(y1 >= 0 && y2 >= 0){
        cout << min(angle1, angle2) << endl;
    }else if(y1 >= 0){ 
        cout << angle1 << endl;
    }else if(y2 >= 0){
        cout << angle2 << endl;
    }

    return 0;
}