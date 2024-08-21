#include <bits/stdc++.h>
//#include <ext/rope>
 
using namespace std;
//using namespace __gnu_cxx;
 
#define ffor(i,o,f)        for(int i = o; i < f; i++)
#define bfor(i,f,o)        for(int i = f; i >= o, i--)
#define pb                 push_back
#define pf                 push_front
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI                 acos(-1)
#define endl               '\n'
#define lcm(a,b)           (a*b)/__gcd(a,b)
#define mem(a, h)          memset(a, (h), sizeof(a))
#define setp(a)            fixed << setprecision(a)
typedef long long          ll;
typedef long double        ld;  
typedef pair < int, int >  pii;
typedef pair < ll, ll >    pll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi >      gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);
const int MOD = 998244353;
const double EPS = double(1e-9);
const int tam = 200005;
int pref[1000][13]; 
int cosa(int k, int n, vector<bool> mark) {
    int ind = -1; 
    int masi = 0;  
    if(k <= 0) return 0; 
    for(int i = 0; i<n; i++) {
        if(mark[i]) continue; 
        if(pref[i][k] > masi) {
            ind = i; 
            masi = pref[i][k]; 
        }
    }
    if(ind == -1) return 0; 
    // cout<<masi<<endl; 
    mark[ind] = true; 
    for(int i = 1; i<k; i++) {
        // cout<<"el anterior: "<<pref[ind][k-i]<<endl; 
        masi = max(masi, (pref[ind][k-i] + cosa(i, n, mark))); 
        // cout<<"esta es una opcion "<<masi<<endl; 
    }
    return masi; 
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    
    int n; 
    int k; 

    cin>>n>>k; 

    int nose[n][12]; 

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<12; j++) {
            cin>>nose[i][j];
        }
    }
    mem(pref, 0); 
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<12; j++) {
            pref[i][j+1] = pref[i][j] + nose[i][j]; 
        }
    }

    vector<bool> mark(n, false); 

    cout<<cosa(k, n, mark)<<endl; 

    return 0;
}