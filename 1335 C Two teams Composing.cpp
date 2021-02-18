/*You have  students under your control and you have to compose exactly two teams consisting of some subset of your students. Each student had his own skill, the -th student skill is denoted by an integer  (different students can have the same skills).

So, about the teams. Firstly, these two teams should have the same size. Two more constraints:

The first team should consist of students with distinct skills (i.e. all skills in the first team are unique).
The second team should consist of students with the same skills (i.e. all skills in the second team are equal).
Note that it is permissible that some student of the first team has the same skill as a student of the second team.

Consider some examples (skills are given):

,  is not a good pair of teams because sizes should be the same;
,  is not a good pair of teams because the first team should not contain students with the same skills;
,  is not a good pair of teams because the second team should contain students with the same skills;
,  is a good pair of teams;
,  is a good pair of teams.
Your task is to find the maximum possible size  for which it is possible to compose a valid pair of teams, where each team size is  (skills in the first team needed to be unique, skills in the second team should be the same between them). A student cannot be part of more than one team.

You have to answer  independent test cases.

Input
The first line of the input contains one integer  () — the number of test cases. Then  test cases follow.

The first line of the test case contains one integer  () — the number of students. The second line of the test case contains  integers  (), where  is the skill of the -th student. Different students can have the same skills.

It is guaranteed that the sum of  over all test cases does not exceed  ().

Output
For each test case, print the answer — the maximum possible size  for which it is possible to compose a valid pair of teams, where each team size is .

Example
inputCopy
4
7
4 2 4 1 4 3 4
5
2 1 5 4 3
1
1
4
1 1 1 3
outputCopy
3
1
0
2
Note
In the first test case of the example, it is possible to construct two teams of size : the first team is  and the second team is . Note, that there are some other ways to construct two valid teams of size .*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++cnt[x];
		}
		int mx = *max_element(cnt.begin(), cnt.end());
		int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
		cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
	}
	
	return 0;
}