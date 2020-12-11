#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a1, pair<int,int>a2)
{
     return (a1.first<a2.first);
}
int main()
{
     int s,n;
     cin>>s>>n;
     vector<pair<int,int>>a(n);
     for(int i=0;i<n;i++)
     {
          cin>>a[i].first>>a[i].second;
     }
     int flag=1;
     sort(a.begin(),a.end(),compare);
     for(int i=0;i<n;i++)
     {
          if(s>a[i].first)
          s+=a[i].second;
          else
          {
               cout<<"NO"; flag=0;
               break;
          }
          
     }
     if(flag==1)
     cout<<"YES";
}