/*Initially Ildar has an empty array. He performs n steps. On each step he takes a subset of integers already added to the array and appends the mex of this subset to the array.

The mex of an multiset of integers is the smallest non-negative integer not presented in the multiset. For example, the mex of the multiset [0,2,3] is 1, while the mex of the multiset [1,2,1] is 0.

More formally, on the step m, when Ildar already has an array a1,a2,…,am−1, he chooses some subset of indices 1≤i1<i2<…<ik<m (possibly, empty), where 0≤k<m, and appends the mex(ai1,ai2,…aik) to the end of the array.

After performing all the steps Ildar thinks that he might have made a mistake somewhere. He asks you to determine for a given array a1,a2,…,an the minimum step t such that he has definitely made a mistake on at least one of the steps 1,2,…,t, or determine that he could have obtained this array without mistakes.

Input
The first line contains a single integer n (1≤n≤100000) — the number of steps Ildar made.

The second line contains n integers a1,a2,…,an (0≤ai≤109) — the array Ildar obtained.

Output
If Ildar could have chosen the subsets on each step in such a way that the resulting array is a1,a2,…,an, print −1.

Otherwise print a single integer t — the smallest index of a step such that a mistake was made on at least one step among steps 1,2,…,t.*/

#include<bits./stdc++.h>
using namespace std;
#define ll long long int
int main()
{
     ll n;
     cin>>n;
     ll max_element = -1;
     ll x; ll flag=0;
     for(ll i=0;i<n;i++)
     {
          cin>>x;
          if(x>max_element+1)
          {
               cout<<i+1;
               flag=1;
               break;
          }
          
          max_element = max(max_element,x);
     }
     
     if(flag==0)
     cout<<-1;
}