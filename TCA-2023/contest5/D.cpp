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

const int tam = 10000005;
bitset<tam> criba;
vector<ll> primos;

void init()
{
    criba.set();
    criba[0] = 0;
    criba[1] = 0;
    for(int i = 2; i < tam; i++)
    {
        if(criba[i])
        {
            primos.push_back(i);
            for(int j = i+i; j < tam; j += i)
                criba[j] = 0;
        }
    }
}

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int n, a[205];
    bool mat[205][205];
    init();
    cin >> n;
    ffor(i, 0, n)
        cin >> a[i];
    ffor(i, 0, n)
    {
        ffor(j, 0, n)
        {
            if (criba[a[i]+a[j]])
                mat[i][j] = true;
            else
                mat[i][j] = false;
        }
    } 
    ffor(i, 0, n)
    {
        ffor(j, 0, n)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
