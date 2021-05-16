
#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define debug(x)     cout<<x<<endl;

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


int main()
{
    // #ifndef ONLINE_JUDGE
    //     clock_t tStart = clock();
    //     freopen("input.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif
      int n, cnt=1;
      cin>>n;
      int First=0, secound=0, thired =0;
      for(int i=1; i<=n; i++)
      {
          int x;
          cin>>x;
          if(cnt==1)
          {
            First+=x;
          }
          else if(cnt==2)
          {
            secound+=x;
          }
          else if(cnt==3)
          {
            thired+=x;
            cnt=0;
          }
          cnt++;
      }
      if(First > secound && First > thired) cout<<"chest"<<endl;
      else if(secound > First && secound > thired) cout<<"biceps"<<endl;
      else cout<<"back"<<endl;
    
    // #ifdef ONLINE_JUDGE
    //     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    // #endif
    return 0;
}