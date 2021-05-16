#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb           push_back
#define mx           10000007

typedef long long int       ll;



 
vector<ll>prime;
bool vis[mx];  //mx is define in above of the code;
void sieve() {
    ll x=sqrt((int)mx);
    for(ll i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(ll j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.pb(2);
    for(ll i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}



int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    fasterio;
     sieve();
     
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
