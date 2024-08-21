#include <bits/stdc++.h>
//#include <ext/rope>

using namespace std;
//using namespace __gnu_cxx;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define endl 			   '\n'
#define lcm(a,b)           (a*b)/__gcd(a,b)
typedef long long          ll;
typedef pair < int, int >  pii;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);

// g++ contest.cpp -o a.exe
// ./a.exe

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, m, ans = 0;
    vi a, b;
    cin >> n >> m;
    a.assign(n, 0);
    b.assign(m, 0);
    ffor(i, 0, n)
        cin >> a[i];
    ffor(i, 0, m)
        cin >> b[i];
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    for(int i = 0; i < min(n, m); i++)
        if (a[i] < b[i])
            ans += b[i] - a[i];
    cout << ans << '\n';
    return 0;
}
