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
    ll n, k;
    double ans = 0;
    cin >> n >> k;
    vll v(n+5, 0), sum(n+5, 0);
    v[0] = 0;
    sum[0] = 0;
    ffor(i, 1, n+1)
    {
        cin >> v[i];
        sum[i] = sum[i-1] + v[i];
    }
    ffor(i, k, n+1)
    {
        ll pos = 1;
        while(pos+i-1 <= n)
            ans = max(ans, (double)(sum[pos+i-1] - sum[pos-1])/(double)i), pos++;
    }
    cout << fixed << setprecision(15) << ans << '\n';
    return 0;
}
