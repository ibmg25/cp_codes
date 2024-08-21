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
    ll n, m, d, aux;
    vector<pair<ll, ll> > a;
    vll ans;
    set<ll> s;
    map<ll, ll> ma;
    s.insert(0);
    s.insert(2e18);
    cin >> n >> m >> d;
    ffor(i, 0, n)
        cin >> aux, a.pb({aux, i}), ans.pb(-1);
    sort(all(a));
    ffor(i, 0, n)
    {
        aux = max(a[i].F-d-1, (ll)0);
        auto it = s.upper_bound(aux);
        it--; 
        aux = *it;
        if (aux > 0)
        {
            s.erase(aux);
            ans[a[i].S] = ma[aux];
            ma[a[i].F] = ma[aux]; 
        }
        else
        {
            ll tam = s.size();
            ans[a[i].S] = tam-1;
            ma[a[i].F] = tam-1;
        }
        s.insert(a[i].F);
    }
    ll tam = s.size();
    cout << tam-2 << '\n';
    ffor(i, 0, n)
        cout << ans[i] << " ";
    cout << '\n'; 
    return 0;
}
