#include <bits/stdc++.h>
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define int long long int

using namespace std;

int32_t main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, w; 
    cin>>n>>w; 

    vi he(n);
    
    for(auto &i: he) cin>>i;

    sort(all(he), greater<>()); 

    vi row(w, 2 * 1e9); 

    bool denilson = false; 

    for(int i = 0; i<n; i++) {
        if(row[i % w] <= he[i]) {
            denilson = true;
            break; 
        }
        row[i % w] = he[i]; 
    }

    if(denilson) cout<<"No"<<endl; 
    else cout<<"Yes"<<endl; 

    return 0;
}