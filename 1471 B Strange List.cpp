/*You have given an array a of length n and an integer x to a brand new robot. What the robot does is the following: it iterates over the elements of the array, let the current element be q. If q is divisible by x, the robot adds x copies of the integer qx to the end of the array, and moves on to the next element. Note that the newly added elements could be processed by the robot later. Otherwise, if q is not divisible by x, the robot shuts down.

Please determine the sum of all values of the array at the end of the process.

Input
The first input line contains a single integer t (1≤t≤100) — the number of test cases.

The first line of each test case contains two integers n and x (1≤n≤105, 2≤x≤109) — the length of the array and the value which is used by the robot.

The next line contains integers a1, a2, ..., an (1≤ai≤109) — the initial values in the array.

It is guaranteed that the sum of values n over all test cases does not exceed 105.

Output
For each test case output one integer — the sum of all elements at the end of the process.*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
          cin>>n;
          ll x; cin>>x;
          ll a[n];
          ll b[n];
          for(ll i=0;i<n;i++)
          {
               cin>>a[i];
               ll val=a[i];
               ll count=1;
               while(val%x==0)
               {
                    val=val/x;
                    count++;
               }
               
               b[i]=count;
          }
          
          ll index=0; ll m= INT_MAX;
          for(ll i=0;i<n;i++)
          {
               if(b[i]<m)
               {
                   m=b[i];
                   index=i;
               }
          }
          ll sum=0;
          for(ll i=index;i<n;i++)
          sum+=m*a[i];
          for(ll i=index-1;i>=0;i--)
          sum+=(m+1)*a[i];
          
          cout<<sum<<endl;
     }
}