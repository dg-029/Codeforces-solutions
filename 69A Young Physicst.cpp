#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int sx=0,sy=0,sz=0;
     int x,y,z;
     for(int i=0;i<n;i++)
     {
          cin>>x>>y>>z;
          sx+=x;
          sy+=y;
          sz+=z;
     }
     
     if(sx==0 && sy==0 && sz==0)
     cout<<"YES";
     else
     cout<<"NO";
}