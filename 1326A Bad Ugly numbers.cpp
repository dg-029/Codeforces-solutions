/*You are given a integer n (n>0). Find any integer s which satisfies these conditions, or report that there are no such numbers:

In the decimal representation of s:

s>0,
s consists of n digits,
no digit in s equals 0,
s is not divisible by any of it's digits.
Input
The input consists of multiple test cases. The first line of the input contains a single integer t (1≤t≤400), the number of test cases. The next t lines each describe a test case.

Each test case contains one positive integer n (1≤n≤105).

It is guaranteed that the sum of n for all test cases does not exceed 105.

Output
For each test case, print an integer s which satisfies the conditions described above, or "-1" (without quotes), if no such number exists. If there are multiple possible solutions for s, print any solution.

Example
inputCopy
4
1
2
3
4
outputCopy
-1
57
239
6789
Note
In the first test case, there are no possible solutions for s consisting of one digit, because any such solution is divisible by itself.

For the second test case, the possible solutions are: 23, 27, 29, 34, 37, 38, 43, 46, 47, 49, 53, 54, 56, 57, 58, 59, 67, 68, 69, 73, 74, 76, 78, 79, 83, 86, 87, 89, 94, 97, and 98.

For the third test case, one possible solution is 239 because 239 is not divisible by 2, 3 or 9 and has three digits (none of which equals zero).*/

#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "-1\n";
        return;
    }
    cout << "2";
    for (int i = 0; i < n - 1; i++)
        cout << "3";
    cout << "\n";
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}