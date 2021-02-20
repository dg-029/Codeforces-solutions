/*You are developing a project to build a new data center. The data center will be a rectangle with an area of exactly  square meters. Each side of the data center must be an integer.

Your goal is to minimize the impact of the external environment on the data center. For this reason, you want to minimize the length of the perimeter of the data center (that is, the sum of the lengths of its four sides).

What is the minimum perimeter of a rectangular data center with an area of exactly  square meters, if the lengths of all its sides must be integers?

Input
The first and only line of the input contains an integer  (), where  is the area of the data center in square meters.

Output
Print the required minimum perimeter in meters.

Examples
inputCopy
36
outputCopy
24
inputCopy
13
outputCopy
28
inputCopy
1
outputCopy
4
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll n;
     cin>>n;
     ll a,b,p;
     ll minp = INT_MAX;
     for(int i=1;i<=sqrt(n);i++)
     {
          if(n%i==0)
          {
               a=n/i;
               b=n/a;
               p=(2*a) + (2*b);
               if(p<minp)
               minp=p;
               
          }
     }
     
     cout<<minp;
}