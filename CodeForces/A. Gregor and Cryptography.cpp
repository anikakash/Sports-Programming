#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define AC                      int
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;

string DecimalToBinary(int n){

    string res="";
    for(int i=31; i>=0; i--){
        int k = n & (1<<i);
        res += (n&k)?'1':'0';
    }
    return res;
}
int BinaryToDecimal(string s){
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        ans = (2*ans)+s[i]-'0';
    }
    return ans;
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
        
        int t;cin>>t; 
        while(t--){
            ll n;cin>>n;
            // int i=3,tp1 = n%2;
            // while(1){
            //     if(tp1 == n%i)break;
            //     i++;
            // }
            // cout<<2<<" "<<i<<endl;
            
            int x = n/2;
            if(x%2==1)cout<<2<<" "<<n/2<<endl;
            else cout<<2<<" "<<4<<endl;
            //cout<<"NN"<<endl;
        }
       // cout<<17%2<<" "<<17%4<<endl;
       // cout<<5%2<<" "<<5%4<<endl;
     
  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}
/*
    1, 4, 5, 9

*/