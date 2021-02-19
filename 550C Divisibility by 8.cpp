/*You are given a non-negative integer n, its decimal representation consists of at most 100 digits and doesn't contain leading zeroes.

Your task is to determine if it is possible in this case to remove some of the digits (possibly not remove any digit at all) so that the result contains at least one digit, forms a non-negative integer, doesn't have leading zeroes and is divisible by 8. After the removing, it is forbidden to rearrange the digits.

If a solution exists, you should print it.

Input
The single line of the input contains a non-negative integer n. The representation of number n doesn't contain any leading zeroes and its length doesn't exceed 100 digits.

Output
Print "NO" (without quotes), if there is no such way to remove some digits from number n.

Otherwise, print "YES" in the first line and the resulting number after removing digits from number n in the second line. The printed number must be divisible by 8.

If there are multiple possible answers, you may print any of them.

Examples
inputCopy
3454
outputCopy
YES
344
inputCopy
10
outputCopy
YES
0
inputCopy
111111
outputCopy
NO*/

#include <bits/stdc++.h> //Not dp approach as n<=100
using namespace std;
typedef long long ll;
const int sz = 100010;
vector<ll> v;
string s;

int toint(string s) {
    stringstream ss(s);
    int ans = 0;
    ss >> ans;
    return ans;
}
bool ismul(string s) {
    int n = toint(s);
    return n % 8 == 0;
}
int main() {
    cin >> s;

    int len = s.length();
    string temp = "";
    for (int i = 0; i < len; ++i) {
        temp.push_back(s[i]);
        if (ismul(temp)) {
            cout << "YES\n" << temp;
            return 0;
        }
        for (int j = i + 1; j < len; ++j) {
            temp.push_back(s[j]);
            if (ismul(temp)) {
                cout << "YES\n" << temp;
                return 0;
            }
            for (int k = j + 1; k < len; ++k) {
                temp.push_back(s[k]);
                if (ismul(temp)) {
                    cout << "YES\n" << temp;
                    return 0;
                }
                temp.pop_back();
            }
            temp.pop_back();
        }
        temp.pop_back();
    }
    cout << "NO";

    return 0;
}