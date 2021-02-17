/*Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

Examples
inputCopy
5
2 4 7 8 10
outputCopy
3
inputCopy
4
1 2 1 1
outputCopy
2*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     
          ll n;cin>>n;
          ll a[n];
          for(ll i=0;i<n;i++)
          cin>>a[i];
         map<ll,ll>even;
         map<ll,ll>odd;
          for(ll i=0;i<n;i++)
          {
               if(a[i]%2==0)
               {
                  even[i+1]=a[i];  
               }
               else
               odd[i+1]=a[i];
          }
          
          if(even.size()==1)
          {
               auto it =even.begin();
               cout<<it->first;
               
          }
          else
          {
                auto it =odd.begin();
               cout<<it->first;
          }
          
          
     
}
