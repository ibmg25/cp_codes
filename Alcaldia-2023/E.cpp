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

int tx, ty;
bool ordenar(const pair<int, pair<int,int>> & a, const pair<int, pair<int,int>> & b)
{
    return a.F < b.F && abs(tx - a.S.F) < abs(tx - b.S.F) && abs(ty - a.S.S) < abs(ty - b.S.S);
}


double pendiente(pair<int, int> & p)
{
    return (tx - p.F) / (ty - p.S); 
}

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int t, xi,yi,hi;
    cin>>tx>>ty;
    cin>>t;
    vector<pair<int, pair<int,int>>> vec(t);
    map<int, pair<int, int>> mpp;
    map<int, pair<int, int>> mpn;

    for(int i = 0; i < t; i++)
    {
        cin>>xi>>yi>>hi;
        vec[i] = {hi, {xi,yi}};
    }
    sort(vec.begin(), vec.end(), ordenar);
    for(int i = 0; i < t; i++)
    {
        int pend =  pendiente(vec[i].S);
        bool espos = pend > 0;
        if(!mpp.count(pend) || !mpn.count(pend))
        {
            if()
            {

            }
        }
        else
        {

        }
    }


    return 0;
}
