
/*Furik loves math lessons very much, so he doesn't attend them, unlike Rubik. But now Furik wants to get a good mark for math. For that Ms. Ivanova, his math teacher, gave him a new task. Furik solved the task immediately. Can you?

You are given a set of digits, your task is to find the maximum integer that you can make from these digits. The made number must be divisible by 2, 3, 5 without a residue. It is permitted to use not all digits from the set, it is forbidden to use leading zeroes.

Each digit is allowed to occur in the number the same number of times it occurs in the set.

Input
A single line contains a single integer n (1 ≤ n ≤ 100000) — the number of digits in the set. The second line contains n digits, the digits are separated by a single space.

Output
On a single line print the answer to the problem. If such number does not exist, then you should print -1.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int sum=0; int cnt0=0;
     vector<int>a(n);
     for(int i=0;i<n;i++)
     {
          cin>>a[i]; sum+=a[i];
          if(a[i]==0)
          cnt0++;
     }
     sort(a.begin(),a.end());
     reverse(a.begin(),a.end());
     if(cnt0==0)
     cout<<-1;
     else if(sum==0 || a[0]==0 )
     cout<<0;
     else
     {
          if(sum%3==0)
          {
               for(int i=0;i<n;i++)
               cout<<a[i];
          }
          
          else if(sum%3==1)
          {
               for(int i=n-1;i>=0;i--)
               {
                    if(a[i]!=0 && a[i]%3==1)
                    {
                         sum=sum-a[i];
                         a[i]=-1;
                         break;
                    }
               }
               
               if (sum % 3 != 0) {
                int test = 0;
                for (int i = n - 1; i >= 0; i--) {
                    if (a[i] != 0 && a[i] % 3 == 2) {
                        a[i] = -1;
                        test++;
                    }
                    if (test == 2) {
                        break;
                    }
                }
          }
          
           vector<int>ans;
           for(int i=0;i<n;i++)
           {
                if(a[i]!=-1)
                ans.push_back(a[i]);
           }
           
           if(ans[0]==0)
           cout<<0;
           else
           {
                for(int i=0;i<ans.size();i++)
                cout<<ans[i];
           }
     }
     
     else if(sum%3==2)
     {
          for(int i=n-1;i>=0;i--)
               {
                    if(a[i]!=0 && a[i]%3==2)
                    {
                         sum=sum-a[i];
                         a[i]=-1;
                         break;
                    }
               }
               
               if (sum % 3 != 0) {
                    
                int test = 0;
                for (int i = n - 1; i >= 0; i--) {
                    if (a[i] != 0 && a[i] % 3 == 1) {
                        a[i] = -1;
                        test++;
                    }
                    if (test == 2) {
                        break;
                    }
                }
     }
      vector<int>ans;
           for(int i=0;i<n;i++)
           {
                if(a[i]!=-1)
                ans.push_back(a[i]);
           }
           
           if(ans[0]==0)
           cout<<0;
           else
           {
                for(int i=0;i<ans.size();i++)
                cout<<ans[i];
           }
     }
     
   }
}      