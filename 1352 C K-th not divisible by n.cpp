/*You are given two positive integers  and . Print the -th positive integer that is not divisible by .

For example, if , and , then all numbers that are not divisible by  are: . The -th number among them is .

Input
The first line contains an integer  () — the number of test cases in the input. Next,  test cases are given, one per line.

Each test case is two positive integers  () and  ().

Output
For each test case print the -th positive integer that is not divisible by .

Example
inputCopy
6
3 7
4 12
2 1000000000
7 97
1000000000 1000000000
2 1
outputCopy
10
15
1999999999
113
1000000001
1*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{ll t;cin>>t;
while(t--){
     ll n,k;cin>>n>>k;
     ll x = k/(n-1);
     ll rem= k-(n-1)*x;
     if(rem==0)
     cout<<n*x-1;
     else
     cout<<n*x+rem;
     cout<<endl;
}
}