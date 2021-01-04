#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int cnt0 = 0,cnt5=0;
     for(int i=0;i<n;i++)
     {
          int r;
          cin>>r;
          if(r==0)
          cnt0++;
          else
          cnt5++;
     }
     
     if(cnt0==0)
     cout<<-1;
    else{ 
     int x = (cnt5/9)*9;
     for(int i=0;i<x;i++)
     cout<<5;
     
     
     
     if(x!=0)
     {for(int i=0;i<cnt0;i++)
     cout<<0;}
     
     else
     cout<<0;
     
}
}