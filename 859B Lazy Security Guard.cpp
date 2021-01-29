/*B. Lazy Security Guard
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Your security guard friend recently got a new job at a new security company. The company requires him to patrol an area of the city encompassing exactly N city blocks, but they let him choose which blocks. That is, your friend must walk the perimeter of a region whose area is exactly N blocks. Your friend is quite lazy and would like your help to find the shortest possible route that meets the requirements. The city is laid out in a square grid pattern, and is large enough that for the sake of the problem it can be considered infinite.

Input
Input will consist of a single integer N (1 ≤ N ≤ 106), the number of city blocks that must be enclosed by the route.

Output
Print the minimum perimeter that can be achieved.*/

#include<bits/stdc++.h>
#include<cmath>
#define ll long long
using namespace std;
bool isPerfect(ll N) 
{ 
    if ((sqrt(N) - floor(sqrt(N))) != 0) 
        return false; 
    return true; 
} 
ll findsqrt(ll n)
{
    while(n)
    {
        if(isPerfect(n))
            return n;
        n--;
    }
    return 1;
}
int main()
{
     ll n;
     cin>>n;
     ll x = sqrt(findsqrt(n));
     ll ans = x*4;
     ll extra = n - (x*x);
     if(extra>0)
     {
          if(extra<=x)
          ans+=2;
          else
          ans+=4;
     }
     
     cout<<ans<<endl;
     
}