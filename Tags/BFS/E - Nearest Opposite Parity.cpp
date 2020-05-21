#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Int int32_t
#define all(c) c.begin(), c.end()
#define FAST ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define pii pair< int , int >
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define bitcnt(n) __builtin_popcountll(n)
#define setpre(n) cout << fixed << setprecision(n)
#define tr(c) for(auto x : c )cout << x << " ";
#define ol(c , s , e ) for(int pos=s; pos<e ; pos++) cout << c[pos] << " ";
#define PI acos(-1)
const int M = 1000000007;
const int N=3e5+5;
const int INF = 1e18+5;

//#define rohit
#ifdef rohit
template<typename... T >
void bug(T... __VA_ARGS__) {
    ((cerr << __VA_ARGS__ << " ") , ...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", bug(__VA_ARGS__) , cerr << endl;
#endif


void solve()
{
    int n;
    cin >> n;
    vector< int > a(n);
    for(auto &x : a){
        cin >> x;
    }
    queue< int > q;
    vector< int > v[n] ;
    vector< int > ans(n , -1);
    for(int i=0; i<n ; i++){
        if(i - a[i] >= 0) {
            v[i-a[i]].pb(i);
            if(a[i-a[i]]%2!=a[i]%2){
                ans[i] = 1;
            }
        }
        if(i + a[i] < n ) {
            v[i+a[i]].pb(i);
            if(a[a[i]+i]%2!=a[i]%2){
                ans[i] = 1;
            }
        }
        if(ans[i] == 1){
            q.push(i);
        }
    }
    //multi source bfs;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(auto x : v[p]){
            if(ans[x]==-1 && a[x]%2==a[p]%2){
                ans[x] = ans[p] + 1;
                q.push(x);
            }
        }
    }
    tr(ans);
    cout << endl;

}

signed main()
{
    FAST;
    //TODO:  check test cases.
    int tc=1;
//    cin >> tc;
    for(int t = 1 ; t <= tc ; t++)
    {
        solve();
    }
}

/*TODO: (Extra Cares)
 * 1)In graphs or dp problems sometimes long long creates MLE.
 * 2)Check whether int to long long typecasting is commented or not?
 * 3)Check overflows.
*/
