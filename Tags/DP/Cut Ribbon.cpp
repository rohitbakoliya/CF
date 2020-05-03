#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
//#define int long long
#define Int int32_t
#define all(c) c.begin(), c.end()
#define FAST ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define pii pair< int , int >
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define bitcnt(n) __builtin_popcountll(n)
#define setpre(n) cout << fixed << setprecision(n)
#define tr(c) for(auto x : c )cout << x << " ";
#define ol(c , s , e ) for(int pos=s; pos<e ; pos++) cout << c[pos] << " ";
#define inf 1e18;
#define PI acos(-1)
const int M = 1000000007;
const int N=1e5+5;

//#define rohit
#ifdef rohit
template<typename... T >
void bug(T... __VA_ARGS__) {
    ((cerr << __VA_ARGS__ << " ") , ...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", bug(__VA_ARGS__) , cerr << endl;
#endif

void solve() {
    int n , a , b , c;
    cin >> n >> a >> b >> c;
    function<int(int , int , int , int)> fun;
    int dp[n+1];
    memset(dp , -1 ,sizeof(dp));
    //solution :  1
    fun = [&](int n , int a , int b , int c ) {
        if(n < 0)
            return INT_MIN;
        if(n == 0 ) return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = 1 + max({fun(n-a , a , b , c) , fun(n-b , a , b , c) , fun(n-c , a , b , c)});
        return dp[n];
    };
    cout << fun(n , a , b , c ) << endl;

    //forword dp
    // solution : 2 ;
    dp[0] = 0;
    for(int i=0 ; i<=n; i++){
        if(dp[i] == -1) continue;
        if(i + a <=n){
            dp[i+a] = max(dp[i+a] , dp[i] + 1);
        }
        if(i + b<=n ) {
            dp[i+b] = max(dp[i+b] , dp[i] + 1);
        }
        if(i + c <=n ){
            dp[i+c] = max(dp[i+c] , dp[i]+1);
        }
    }
    cout << dp[n] << endl;


}

signed main()
{
    FAST;
    //TODO:  check test cases are there or not?
    int tc=1;
//    cin >> tc;
    for(int t = 1 ; t <= tc ; t++)
    {
        solve();
    }
}
