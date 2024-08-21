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
    set<ll> cw, ch;
    set<ll>:: iterator l, r;
    multiset<ll> dw, dh;
    multiset<ll>:: iterator itm;
    ll w, h, n, a;
    char c;
    cin >> w >> h >> n;
    cw.insert(0);
    cw.insert(w);
    ch.insert(0);
    ch.insert(h);
    dw.insert(w);
    dh.insert(h);
    ffor(i, 0, n)
    {
        cin >> c >> a;
        if (c == 'V')
        {
            l = cw.lower_bound(a);
            r = l;
            l--;
            itm = dw.find(*r-*l);
            dw.erase(itm);
            cw.insert(a);
            dw.insert(a - *l);
            dw.insert(*r - a);
        }
        if (c == 'H')
        {
            l = ch.lower_bound(a);
            r = l;
            l--;
            itm = dh.find(*r-*l);
            dh.erase(itm);
            ch.insert(a);
            dh.insert(a - *l);
            dh.insert(*r - a);
        }
        cout << *dw.rbegin() * *dh.rbegin() << '\n';
    }
    return 0;
}
