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
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        vii v;
        int in = s[0]-'a';
        int fi = s[s.size()-1] - 'a';
        ffor(i, 1, s.size()-1)
        {
            if (s[i]-'a' >= min(in, fi) && s[i]-'a' <= max(in, fi))
                v.pb({s[i]-'a', i+1});
        }
        sort(all(v));
        if (fi < in)
            reverse(all(v));
        cout << abs(fi-in) << " " << v.size()+2 << '\n';
        cout << 1 << " ";
        ffor(i, 0, v.size())
            cout << v[i].S << " ";
        cout <<  s.size() << '\n';
    }
    return 0;
}
