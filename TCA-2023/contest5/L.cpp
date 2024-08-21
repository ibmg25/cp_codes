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
const double EPS = double(1e-9);

// g++ contest.cpp -o a.exe
// ./a.exe

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int x, y, h;
    double haux, res;
    cin >> x >> y;
    h = sqrt(x*x + y*y);
    haux = sqrt(x*x + y*y);
    if (x == 0 || y == 0 || (double)abs(h-haux) < EPS)
        cout << "black" << '\n';
    else
    {
        if ((x > 0 && y > 0) || (x < 0 && y < 0))
        {
            if (h % 2 == 1)
                cout << "white" << '\n';
            else
                cout << "black" << '\n';
        }
        else
        {
            if (h % 2 == 1)
                cout << "black" << '\n';
            else
                cout << "white" << '\n';
        }
    }
    return 0;
}
