//https://codeforces.com/contest/1304/problem/C

#include<bits/stdc++.h>
using namespace std;
#define sz(a) (int)(a.size())
#define int long long
#define FAST ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(c) c.begin(), c.end()
#define pb push_back
#define F first
#define S second
#define bitcnt(n) __builtin_popcountll(n)
#define PI acos(-1)
#define endl "\n"
const int M = 1000000007;     
const int N=3e5+5;
signed main()
{
     FAST;
     int TC , i , j;
     cin>>TC;
     while(TC--)
     {
         int n , m;
         cin>>n>>m;
         vector< pair< int , pair < int , int > > > v;
         for(i=0 ; i<n ;i++)
         {
              int t , l , r;
              cin>>t>>l>>r;
              v.pb({t , {l , r}});
         }
         int cL =m, cR = m , cT = 0;
         for(i=0 ; i<n ;i++)
         {
              
               cL = cL - (v[i].F - cT);
               cR = cR + (v[i].F - cT);
               if(v[i].S.F > cR || v[i].S.S < cL ){
                    break;
               }
               cT = v[i].F;
               // cout<<cL<<" "<<cR <<endl;
              cL = max(cL , v[i].S.F);
              cR = min(cR , v[i].S.S);
         }
         if(i==n){
              cout<<"YES\n";
         }
         else{
              cout<<"NO\n";
         }
     }
}
