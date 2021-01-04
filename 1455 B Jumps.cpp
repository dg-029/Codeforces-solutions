/*You are standing on the OX-axis at point 0 and you want to move to an integer point x>0.

You can make several jumps. Suppose you're currently at point y (y may be negative) and jump for the k-th time. You can:

either jump to the point y+k
or jump to the point y−1.
What is the minimum number of jumps you need to reach the point x?

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

The first and only line of each test case contains the single integer x (1≤x≤106) — the destination point.

Output
For each test case, print the single integer — the minimum number of jumps to reach x. It can be proved that we can reach any integer point x.

Example
inputCopy
5
1
2
3
4
5
outputCopy
1
3
2
3
4*/

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		
		int steps = 0;
		while (steps * (steps + 1) < 2 * x)
			steps++;
		
		if (steps * (steps + 1) / 2 == x + 1)
			steps++;
		cout << steps << endl;
	}
}