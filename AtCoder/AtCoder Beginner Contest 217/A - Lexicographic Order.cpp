#include<bits/stdc++.h>
using namespace    std;
#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       20000000
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;
const ll  MOD = 1e9 + 7;
//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
int gcd(int a, int b) { int x ; return x = __gcd(a, b);}
int lcm(int a, int b) {int y; return y = ((a) * ((b) / gcd(a, b)));}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;

   string s,t; cin>>s>>t;
   int x=0, y=0;
   for(int i=0; i<s.size(); i++) x+=(int)s[i];
   for(int i=0; i<t.size(); i++) y+=(int)t[i];
   
   // cout<<x<<endl;

   if(s<t)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
