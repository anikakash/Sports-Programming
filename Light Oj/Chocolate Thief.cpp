#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")



//who cares? I want to give some scary looks to my code... XD//


typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ------------------------------------Constants-------------------------------------//

#define pi           (acos(-1.0)) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status : ;
int main()
{
     // #ifndef ONLINE_JUDGE
     //     freopen("int.txt","r",stdin);
     //     freopen("ans2.txt","w",stdout);
     // #endif

   string name[150];
   int volum[150];

   int t, n, Max, max_pos, Min, min_pos, a,b,c;

   cin>>t;
   for(int i=1; i<=t; i++){
        cin>>n;
            Max = 0; Min = INT_MAX;
            memset(volum,0,sizeof(volum));
    for(int j=0; j<n; j++){
        cin>>name[j]>>a>>b>>c;
        volum[j]=(a*b*c);
        if(Max < volum[j]){
            max_pos = j;
            Max = volum[j];
        }
        if(Min > volum[j]){
             min_pos = j;
            Min = volum[j];
         }
    }

        if(Max==Min)
            cout<<"Case "<<i<<": no thief"<<endl;
       else cout<<"Case "<<i<<": "<<name[max_pos]<<" took chocolate from "<<name[min_pos]<<endl;
   }

    return 0;

}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:
