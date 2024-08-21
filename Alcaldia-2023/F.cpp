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
    int n, k, fibo[22], eco[22];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 22; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    while (cin >> n >> k && n != 0 && k != 0)
    {
        eco[0] = k;
        for(int i = 1; i < 22; i++)
            eco[i] = eco[i-1] + fibo[i]*2;
        cout << eco[n-1] << '\n';
    }
    return 0;
}