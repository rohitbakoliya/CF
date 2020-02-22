//https://codeforces.com/contest/746/problem/B
#include <bits/stdc++.h>
using namespace std;
#define sz(a) (a.size())
#define int long long
#define SYNC ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(c) c.begin(), c.end()
#define pb push_back
#define F first
#define S second
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define endl "\n"
#define bitcnt(n) __builtin_popcountll(n)
#define debug(x) cout << #x << " : " << x << endl;
#define debug2(x, y) cout << #x << " : " << x << " , " << #y << " : " << y << endl;
#define debug3(x,y,z) cout<<#x<<" : "<<x<<" , "<<#y<<" : "<<y<<" , "<<#z<<" : "<<z<<endl;
const int M = 1000000007;
const int N = 3e5 + 5;

void solve()
{
     int n , i; string s;
     cin>>n >> s;
     for(i = n - 2 ; i>=0 ; i-=2){
          cout<<s[i];
          s.erase(s.begin() + i);
     }
     cout<<s<<endl;
}

signed main()
{
     SYNC;
     int TC = 1;
     // cin>>TC;
     while (TC--)
          solve();
}
