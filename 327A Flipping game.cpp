#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int cnt_1=0,cnt_0=0, max_0=-1;
     int a ;
     while(n--)
     {
          cin>>a;
          if(a==1)
          {
               cnt_1++;
               if(cnt_0>0)
               cnt_0--;
          }
          
          if(a==0)
          {
               cnt_0++;
               if(max_0<cnt_0)
               max_0 =cnt_0;
          }
     }
     
     int ans = cnt_1 + max_0;
     cout<<ans;
}