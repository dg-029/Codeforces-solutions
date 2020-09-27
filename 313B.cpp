#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int n=s.length();
     int arr[n];
     memset(arr,0,sizeof(arr));
     int k=0;
     for(int i=1;i<n;i++)
     {
          if(s[i]==s[i-1])
          { k++;
          
          }
          arr[i]=k;
     }
     
     int m,l,r;
     cin>>m;
     while(m--)
     {
          cin>>l>>r;
          cout<<arr[r-1]-arr[l-1]<<endl;
          
     }
}