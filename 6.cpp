#include <iostream>
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
    int tab[3][3];
    bool result[3][3];
    int i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            result[i][j] = true;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> tab[i][j];
    }
    
    if(tab[0][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        //result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
    }
    if(tab[1][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[2][0] = !result[2][0];
        //result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        //result[2][1] = !result[2][1];
    }
    if(tab[2][0]%2 != 0)
    {
        //result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
    }
    if(tab[0][1]%2 != 0)
    {
        result[0][0] = !result[0][0];
        //result[1][0] = !result[1][0];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        //result[1][2] = !result[1][2];
        result[0][2] = !result[0][2];
    }
    if(tab[1][1]%2 != 0)
    {
        result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
    }
    if(tab[2][1]%2 != 0)
    {
        //result[1][0] = !result[1][0];
        result[1][1] = !result[1][1];
        //result[1][2] = !result[1][2];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if(tab[0][2]%2 != 0)
    {
        //result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][2] = !result[1][2];
    }
    if(tab[1][2]%2 != 0)
    {
        //result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];
        //result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if(tab[2][2]%2 != 0)
    {
        result[2][2] = !result[2][2];
        result[2][1] = !result[2][1];
        result[1][2] = !result[1][2];
        //result[1][1] = !result[1][1];
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(result[i][j]) cout << 1;
            else cout << 0;
        }
        cout << '\n';
    }        
 
 
 
 
return 0;
   
}