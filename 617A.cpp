#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     int n;
     cin>>n;
     ll ans=0;
     ans+=n/5;
     n=n%5;
      ans+=n/4;
     n=n%4;
      ans+=n/3;
     n=n%3;
      ans+=n/2;
     n=n%2;
     ans+=n/1;
     cout<<ans;
     
}