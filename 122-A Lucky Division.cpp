#include<bits/stdc++.h>
using namespace std;
bool islucky(int x)
{
     while(x)
     {
          int r=x%10;
          if(r!=7 && r!=4)
          return false;
          
          x=x/10;
     }
     return true;
}
int main()
{
     int n;
     cin>>n; int flag=0;
     for(int i=1;i<=n;i++)
     {
          if(islucky(i) && n%i==0)
          {flag=1; cout<<"YES"; break;}
     }
     if(flag==0)
     cout<<"NO";
     
}