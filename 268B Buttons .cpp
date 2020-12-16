#include<bits\stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int ans=n;
     for(int i=1;i<n;i++)
     {
          ans+=(n-i-1)*(i+1)+1;
     }
     cout<<ans;
}