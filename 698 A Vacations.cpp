/*Vasya has n days of vacations! So he decided to improve his IT skills and do sport. Vasya knows the following information about each of this n days: whether that gym opened and whether a contest was carried out in the Internet on that day. For the i-th day there are four options:

on this day the gym is closed and the contest is not carried out;
on this day the gym is closed and the contest is carried out;
on this day the gym is open and the contest is not carried out;
on this day the gym is open and the contest is carried out.
On each of days Vasya can either have a rest or write the contest (if it is carried out on this day), or do sport (if the gym is open on this day).

Find the minimum number of days on which Vasya will have a rest (it means, he will not do sport and write the contest at the same time). The only limitation that Vasya has — he does not want to do the same activity on two consecutive days: it means, he will not do sport on two consecutive days, and write the contest on two consecutive days.

Input
The first line contains a positive integer n (1 ≤ n ≤ 100) — the number of days of Vasya's vacations.

The second line contains the sequence of integers a1, a2, ..., an (0 ≤ ai ≤ 3) separated by space, where:

ai equals 0, if on the i-th day of vacations the gym is closed and the contest is not carried out;
ai equals 1, if on the i-th day of vacations the gym is closed, but the contest is carried out;
ai equals 2, if on the i-th day of vacations the gym is open and the contest is not carried out;
ai equals 3, if on the i-th day of vacations the gym is open and the contest is carried out.
Output
Print the minimum possible number of days on which Vasya will have a rest. Remember that Vasya refuses:

to do sport on any two consecutive days,
to write the contest on any two consecutive days.
Examples
inputCopy
4
1 3 2 0
outputCopy
2
inputCopy
7
1 3 3 2 1 2 3
outputCopy
0
inputCopy
2
2 2
outputCopy
1
Note
In the first test Vasya can write the contest on the day number 1 and do sport on the day number 3. Thus, he will have a rest for only 2 days.

In the second test Vasya should write contests on days number 1, 3, 5 and 7, in other days do sport. Thus, he will not have a rest for a single day.

In the third test Vasya can do sport either on a day number 1 or number 2. He can not do sport in two days, because it will be contrary to the his limitation. Thus, he will have a rest for only one day.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll n;
     cin>>n;
     ll a[n];
     for(ll i=0;i<n;i++)
     cin>>a[i];
     
     ll dp[n+1][3];
     for(ll i=0;i<=n;i++)
     {
          dp[i][0]=INT_MAX;
          dp[i][1]=INT_MAX;
          dp[i][2]=INT_MAX;
          
     }
     
     dp[0][0]=0; dp[0][1]=0; dp[0][2]=0; //base cases
     for(ll i=1;i<=n;i++)
     {
          dp[i][0]=1+min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2])); // for a rest day, min because we want min resting days
          
          if(a[i-1]==1|| a[i-1]==3) // for a contest or gym
           dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
               
          
          
          if(a[i-1]==2 || a[i-1]==3)
          dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
     }
     
     cout<<min(dp[n][0],min(dp[n][1],dp[n][2]));
}