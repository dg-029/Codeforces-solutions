/*You are given an array  consisting of  integers.

Your task is to determine if  has some subsequence of length at least  that is a palindrome.

Recall that an array  is called a subsequence of the array  if  can be obtained by removing some (possibly, zero) elements from  (not necessarily consecutive) without changing the order of remaining elements. For example, ,  and  are subsequences of , but  and  are not.

Also, recall that a palindrome is an array that reads the same backward as forward. In other words, the array  of length  is the palindrome if  for all  from  to . For example, arrays , ,  and  are palindromes, but arrays  and  are not.

You have to answer  independent test cases.

Input
The first line of the input contains one integer  () — the number of test cases.

Next  lines describe test cases. The first line of the test case contains one integer  () — the length of . The second line of the test case contains  integers  (), where  is the -th element of .

It is guaranteed that the sum of  over all test cases does not exceed  ().

Output
For each test case, print the answer — "YES" (without quotes) if  has some subsequence of length at least  that is a palindrome and "NO" otherwise.

Example
inputCopy
5
3
1 2 1
5
1 2 2 3 2
3
1 1 2
4
1 2 2 1
10
1 1 2 2 3 3 4 4 5 5
outputCopy
YES
YES
NO
YES
NO
Note
In the first test case of the example, the array  has a subsequence  which is a palindrome.

In the second test case of the example, the array  has two subsequences of length  which are palindromes:  and .

In the third test case of the example, the array  has no subsequences of length at least  which are palindromes.

In the fourth test case of the example, the array  has one subsequence of length  which is a palindrome:  (and has two subsequences of length  which are palindromes: both are ).

In the fifth test case of the example, the array  has no subsequences of length at least  which are palindromes.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;cin>>n; int a[n];
          for(int i=0;i<n;i++)
          cin>>a[i]; 
          int flag=0;
          for(int i=0;i<n;i++)
          {
               for(int j=i+2;j<n;j++)
               {
                    if(a[i]==a[j])
                    {
                         flag=1;
                         cout<<"YES"<<endl;
                         break;
                    }
                    
                    
               }
               
               if(flag==1)
               break;
          }
          
          if(flag==0)
          cout<<"NO"<<endl;
     }
}