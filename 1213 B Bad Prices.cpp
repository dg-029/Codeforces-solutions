/*Polycarp analyzes the prices of the new berPhone. At his disposal are the prices for  last days: , where  is the price of berPhone on the day .

Polycarp considers the price on the day  to be bad if later (that is, a day with a greater number) berPhone was sold at a lower price. For example, if  and , then the number of days with a bad price is  — these are days  (),  () and  ().

Print the number of days with a bad price.

You have to answer  independent data sets.

Input
The first line contains an integer  () — the number of sets of input data in the test. Input data sets must be processed independently, one after another.

Each input data set consists of two lines. The first line contains an integer  () — the number of days. The second line contains  integers  (), where  is the price on the -th day.

It is guaranteed that the sum of  over all data sets in the test does not exceed .

Output
Print  integers, the -th of which should be equal to the number of days with a bad price in the -th input data set.

Example
inputCopy
5
6
3 9 4 6 7 5
1
1000000
2
2 1
10
31 41 59 26 53 58 97 93 23 84
7
3 2 1 2 3 4 5
outputCopy
3
0
1
8
2*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;cin>>n;
          ll a[n];
          for(ll i=0;i<n;i++)
          cin>>a[i];
          ll m=INT_MAX;
          ll ans=0;
          for(ll i=n-1;i>=0;i--)
          {
               if(a[i]>m)
               ans++;
               m=min(m,a[i]);
          }
          
          cout<<ans<<endl;
     }
}