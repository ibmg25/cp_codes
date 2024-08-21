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
    int t, bs;
    string s;
    cin >> t;
    while (t--)
    {
        bs = 0;
        cin >> s;
        ffor(i, 0, s.size())
            if (s[i] == 'B') bs++;
        ffor(i, 1, s.size())
        {
            if (i < 1) i = 1;
            cout << i << " " << bs << endl;
            if (s[i] == 'B' && s[i-1] == 'A' && bs > 1)
                s = s.substr(0, i-1) + s.substr(i+1, s.size()-i-1), i -= 3, bs--, cout << s << endl;
        }
        int tam = s.size();
        if (bs == 1 && s[tam-1] == 'B' && tam > 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
