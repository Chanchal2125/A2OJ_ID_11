#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll             long long int
#define ld             long double
#define mod            1000000007
#define endl           "\n"
#define vi             vector<ll>
#define vs             vector<string>
#define pii            pair<ll, ll>
#define ump            unordered_map
#define mp             map
#define pq_max         priority_queue<ll>
#define pq_min         priority_queue<ll,vi,greater<ll>
#define ff             first
#define ss             second
#define mid(l,r)       (l+(r-l)/2)
#define loop(i,a,b)    for(int i=(a); i <=(b);i++)
#define looprev(i,a,b) for(int i=(a); i >=(b);i--)
#define clr(val)       memset(val,0,sizeof(val))
#define what_is(x)     cerr << #x << " is " << x << endl; 
#define OJ             \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main() 
{
 
     int n;
    cin>>n;
    int left[10001],right[10001];
    for(int i=0;i<n;i++){
        cin>>left[i]>>right[i];
    }
    int r0=0,r1=0,l0=0,l1=0;
    for(int i=0;i<n;i++){
        if(right[i]==1){
            r1++;
        }else{
            r0++;
        }
    }
    int red=min(r1,r0);
    for(int i=0;i<n;i++){
        if(left[i]==1){
            l1++;
        }else{
            l0++;
        }
    }
    red+=min(l1,l0);
    cout<<red;
 
 
 
return 0;
   
}