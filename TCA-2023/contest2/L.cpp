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
    int n, ans = -1;
    vector<pair<pii, int> > v;
    cin >> n;
    v.assign(n, {{0, 0}, 0});
    ffor(i, 0, n)
    {
        cin >> v[i].F.F >> v[i].F.S;
        v[i].F.S *= -1;
        v[i].S = i+1;
    }
    sort(all(v));
    ffor(i, 1, n)
    {
        //cout << -v[i].F.S << " --- " << -v[i-1].F.S << endl;
        if (-v[i].F.S <= -v[i-1].F.S)
        {
            ans = v[i].S;
            break;
        }
        if (i < n-1)
        {
            if (v[i].F.F <= -v[i-1].F.S && -v[i].F.S >= v[i+1].F.F)
            {
                ans = v[i].S;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
