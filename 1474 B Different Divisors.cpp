/*Positive integer x is called divisor of positive integer y, if y is divisible by x without remainder. For example, 1 is a divisor of 7 and 3 is not divisor of 8.

We gave you an integer d and asked you to find the smallest positive integer a, such that

a has at least 4 divisors;
difference between any two divisors of a is at least d.
Input
The first line contains a single integer t (1≤t≤3000) — the number of test cases.

The first line of each test case contains a single integer d (1≤d≤10000).

Output
For each test case print one integer a — the answer for this test case.

Example
inputCopy
2
1
2
outputCopy
6
15*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
          cin>>n;
          vector<ll>a;
          for(ll i=n+1; ;i++)
          {
               bool find = true;
               for(ll j=2;j*j<=i;j++)
               {
                    if(i%j==0)
                    {
                         find=false;
                         break;
                    }
               }
               
               if(find)
               {
                    a.push_back(i);
                    break;
               }
          }
          
          for(ll i= a.back()+n;;i++)
          {
               bool find = true;
               for(ll j=2;j*j<=i;j++)
               {
                    if(i%j==0)
                    {
                         find=false;
                         break;
                    }
               }
               
               if(find)
               {
                    a.push_back(i);
                    break;
               }
          }
          
          cout<<min(a[0]*a[1],a[0]*a[0]*a[0])<<endl;
     }
}