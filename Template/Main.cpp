#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       1e2
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;

int ROW[]={+0, +0, -1, +1};
int COL[]={+1, -1, +0, +0};
 
int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
 
int KX[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
int KY[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

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
 bool cmp(pair<int,char>a, pair<int,char>b){
    if(a.first!=b.first) return a>b;
    return a<b;
 }

ll findTrailingZeros(ll n)
{
    ll count = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}
ll digit_counter(ll n){
    ll cnt=0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
}


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;
  
   int tt;cin>>tt;
   while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
          
        sort(v.begin(), v.end());
    dl sum=0.0;
        if(n%2==0){
            int x=0, y=n/2;
            dl sum1=0.0, sum2=0.0, m = y;
            
            y--;
            while(x<=y){
                if(v[x]<0){y++; m++;}
                sum1+=(v[x]*1.0);
                x++;
            }
            if(gobug) debugNS("sum1"," = ",sum1);
            sum1 = sum1/m;
             y = n-1;
             m = 0;
            while(x<=y){
                sum2+=(v[x]*1.0);
                x++; m++;
            }
            if(gobug) debugNS("sum2"," = ",sum2);
            sum2 = sum2/m;
            sum = sum1+sum2;
        }
        else{

            int x=0, y=(n/2);
            dl sum1=0.0, sum2=0.0, m = y+1.0;
            if(gobug)debugN(y);
            if(gobug)debugN(m);
            while(x<=y){
                sum1 =sum1 + ((v[x]+v[y])*1.0) ;
                x++; y--;
            }
            sum1 = sum1/m;
            if(gobug)debugNS("sum1"," = ",sum1);
            x++; y = n-1; m--;
            while(x<=y){
                sum2 =sum2 + (v[x]*1.0);
                x++; y--;
            }
            sum2 = sum2/m;
            if(gobug)debugNS("sum2"," = ",sum2);
            sum = sum1+sum2;
        }
        

        
        cout<<dpoint(9)<<sum<<endl;
   }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}