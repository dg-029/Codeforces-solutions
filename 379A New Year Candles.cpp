#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a , b;
     cin>>a>>b;
     int ans=0;
     ans+=a;
     while(a>=b)
     {
          ans=ans+a/b ;
          a=a/b+ a%b;
     }
     cout<<ans;
}