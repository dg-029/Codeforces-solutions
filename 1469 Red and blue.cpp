/*Monocarp had a sequence a consisting of n+m integers a1,a2,…,an+m. He painted the elements into two colors, red and blue; n elements were painted red, all other m elements were painted blue.

After painting the elements, he has written two sequences r1,r2,…,rn and b1,b2,…,bm. The sequence r consisted of all red elements of a in the order they appeared in a; similarly, the sequence b consisted of all blue elements of a in the order they appeared in a as well.

Unfortunately, the original sequence was lost, and Monocarp only has the sequences r and b. He wants to restore the original sequence. In case there are multiple ways to restore it, he wants to choose a way to restore that maximizes the value of

f(a)=max(0,a1,(a1+a2),(a1+a2+a3),…,(a1+a2+a3+⋯+an+m))
Help Monocarp to calculate the maximum possible value of f(a).

Input
The first line contains one integer t (1≤t≤1000) — the number of test cases. Then the test cases follow. Each test case consists of four lines.

The first line of each test case contains one integer n (1≤n≤100).

The second line contains n integers r1,r2,…,rn (−100≤ri≤100).

The third line contains one integer m (1≤m≤100).

The fourth line contains m integers b1,b2,…,bm (−100≤bi≤100).

Output
For each test case, print one integer — the maximum possible value of f(a)*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n; cin>>n;
          vector<ll>a(n);
          for(ll i=0;i<n;i++) cin>>a[i];
          ll m;
          cin>>m;
          vector<ll>b(m);
          for(ll i=0;i<m;i++) cin>>b[i];
          partial_sum(a.begin(),a.end(),a.begin());
          partial_sum(b.begin(),b.end(),b.begin());
          cout<<max((ll)0,*max_element(a.begin(),a.end()))+max((ll)0,*max_element(b.begin(),b.end()));
          cout<<endl;
          
     }
}