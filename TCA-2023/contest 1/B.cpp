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

int n;
vi v;
vi memo(1000005, -1);

int dp(int m)
{
    if (m <= 0) return 0;
    if (m == 1) return v[n-m];
    if (m == 2) return max(v[n-m], v[n-(m-1)]);
    if (m == 3) return max(max(v[n-m], v[n-(m-1)]), v[n-(m-2)]);
    if (memo[m] != -1)
        return memo[m];
    return memo[m] = max(dp(m-1), dp(m-3) + v[n - m]);
}

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    cin >> n;
    v.assign(n+5, 0);
    ffor(i, 0, n)
        cin >> v[i];
    cout << dp(n) << '\n';
    return 0;
}
