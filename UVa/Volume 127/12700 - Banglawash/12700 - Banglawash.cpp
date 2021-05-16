#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
       int t, cnt=0;
       scanf("%d",&t);
       while(t--)
       {
            int n; char arr[100];
            scanf("%d",&n);
            scanf("%s",arr);
            int B_Wash=0, BD=0, W_Wash=0, Abandoned=0, Draw=0, WWW=0;
            for(int i=0; i<n; i++)
            {
                if(arr[i]=='B')BD++;
                else if(arr[i]=='W')WWW++;
                else if(arr[i]=='T')Draw++;
                else if(arr[i]=='A')Abandoned++;
            }
            if(Abandoned == n)cout<<"Case "<<++cnt<<": "<<"ABANDONED"<<endl;
            else if(BD==n || BD == (n-Abandoned))cout<<"Case "<<++cnt<<": "<<"BANGLAWASH"<<endl;
            else if(WWW==n || WWW == (n-Abandoned))cout<<"Case "<<++cnt<<": "<<"WHITEWASH"<<endl;
            else if(BD == WWW)cout<<"Case "<<++cnt<<": "<<"DRAW "<<WWW<<" "<<Draw<<endl;
            else if(BD > WWW)cout<<"Case "<<++cnt<<": "<<"BANGLADESH "<<BD<<" - "<<WWW<<endl;
            else if(BD < WWW)cout<<"Case "<<++cnt<<": "<<"WWW "<<WWW<<" - "<<BD<<endl;

       }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
