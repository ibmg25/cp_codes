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
    int a, b, x;
    bool rev = false, xp = false;
    cin >> a >> b >> x;
    if (x%2 == 0)
        xp = true;
    string s1 = "", s2 = "", s3 = "", aux;
    if (b > a)
    {
        s2 += "1";
        aux = "0";
        b--;
    }
    else
    {
        s2 += "0";
        aux = "1";
        a--;
        rev = true;
    }
    while (x > 0)
    {
        s2 += aux;
        if (aux == "0")
            aux = "1", a--;
        else
            aux = "0", b--;
        x--;
        if (xp && x == 1)
        {
            if (aux == "1")
            {
                while(a)
                    s2 += "0", a--;
            }
            else
            {
                while(b)
                    s2 += "1", b--;
            }
        }
    }
    ffor(i, 0, b)
        s1 += "1";
    ffor(i, 0, a)
        s3 += "0";
    if(rev)
        reverse(all(s2));
    cout << s1+s2+s3 << '\n';
    return 0;
}
