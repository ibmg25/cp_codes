#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define PI acos(-1)
#define ll long long int
#define ld long double

const int INF = 1e9+7;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  string s; cin >> s;

  int st = (s.size()+31)/32;
  int ln;
  for(int i = 0; i < 32; i++){
    if( (1<<i) >= st){
      ln = i+1;
      break;
    }
  }

  
  for(int i = 0; i < ln; i++){
    cout << "long";
    if(i < ln-1) cout << " ";
  }
  cout << endl;
}

