#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)               cout<<" "<<a<<" = ";
#define debug2(b)               cout<<b<<endl;
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

vector<int> arr;
void num(){
    int x = 1;
    for(int i=0; i<100; i++){
        arr.pb(x);
        x++;
    }
}

int main(){
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("output.txt","w",stdout);
   #endif
        num();
        int t;
        cin>>t;
        while(t--){
           int n;
           cin>>n;
           if(n%2==0){
               for(int i=1; i<n; i+=2){
                 int x = arr[i], y = arr[i-1];
                 cout<<x<<" "<<y<<" ";
               }
             NL;
           }
           else{
               for(int i=1; i<n-2; i+=2){
                 int x = arr[i], y = arr[i-1];
                 cout<<x<<" "<<y<<" ";
               }
              // debug1("Y");
             cout<<arr[n-2]<<" "<<arr[n-1]<<" "<<arr[n-3]<<endl;
           }

        }

        
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
   return 0;
}